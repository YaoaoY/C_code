#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int X = 0;
    scanf("%d", &X);
    int g = 0;
    int m = 0;
    int x = 0;
    int flag = 0;
    for (g = 0; g < X / 5; g++)
    {//这里无需将flag重新初始化为0
        for (m = 0; m < X / 3; m++)
        {
            for (x = 0; x < X; x += 3)//注意：这里x定义的是小鸡的个数，所以是+3
            {
                if ((g * 5 + m * 3 + x / 3 == X) && (g + m + x == X))
                {
                    printf("公鸡%d,母鸡%d,小鸡%d\n", g, m, x);
                    flag = 1;//flag用来标记，条件只要有一个成立，那么flag就会等于1
                }

            }
        }
    }
    if (flag == 0)//一次进入if语句满足条件的情况都没有，就说明“无解”
    {
        printf("无解");
    }
    return(0);
}