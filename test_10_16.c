#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    int x, y, i, j, f = 0, sign = 0, count = 0;
    scanf("%d %d", &x, &y);

    for (i = x; i <= y; i++)//注意x<y的时候存在x-y没有素数的情况，比如：9-10；
    {
        sign = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                sign = 1;//标记变量
                break;
            }
        }
        if (sign == 0)//此时进入if的就是素数
        {
            f = 1;
            printf("%d ", i);
            count++;

            if (count % 5 == 0)
            {
                printf("\n");
            }


            /*
            if (count % 5 != 0){
                printf("%d ",i);
            } else {
                printf("%d\n",i);
            }*/
        }
    }
    if (f == 0) printf("无");//说明没有进入if，所以没有素数


    return(0);
}

