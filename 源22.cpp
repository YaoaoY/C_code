#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int get_max(int x, int y)//定义函数
{
    int z = 0;//函数体 
    if (x > y)
        return x;
    else
        return y;
}
int main()
{

    int a = 10;
    int b = 20;
    //get_max(a,b)//传参
    int max = get_max(a, b);
    printf("max=%d\n", max);
    return 0;
}
