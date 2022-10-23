#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{

    double data1 = 0;
    double data2 = 0;
    char op;
    double r = 0;
    scanf("%lf%c%lf", &data1, &op, &data2);
    switch (op)//key多分支，利用switch-case循环语句
    {
    case'+':
        r = data1 + data2;
        break;
    case'-':
        r = data1 - data2;
        break;
    case'*':
        r = data1 * data2;
        break;
    case'/':
        r = data1 / data2;
        break;
    }
    if ((fabs(r - (int)r)) > 0)//利用绝对值函数，来判断算出的结果是否为小数
    {
        printf("%.2lf\n", r);//如果是小数，那么就按照保留两位小数的形式，以浮点数形式输出
    }
    else
    {
        printf("%d\n", (int)r);//不是小数，按照整形输出。注意：强制类型转换！！！！
    }

    return(0);
}