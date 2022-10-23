#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include <stdio.h>
int main()
{

    int X = 0;
    int i = 0;
    int j = 0;
    int sum = 0;
    scanf("%d", &X);
    for (i = 1; i <= X; i++)
    {
        sum = 0;//易错：这里的sum=0重新初始化的步骤不要掉！！！
        for (j = 1; j < i; j++)//易错：这里判断部分不能写成"j<sqrt(i)"因为这里并不是只是判断素数，而是需要它的全部因子！！！
        {
            if (i % j == 0)
            {
                sum += j;//j为因子，都累加到sum中
            }

        }
        if (sum == i)
        {
            printf("%5d\n", i);//"输出的每个数字占5位；"
            for (j = 1; j < i; j++)//key:这一块是我没有想到的，再用一次for循环，把因子逐个打印出来
            {
                if (i % j == 0)
                {
                    printf("%5d", j);
                }
            }
            printf("\n");

        }


    }

    return(0);
}