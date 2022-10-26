#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    double arr[5] = { 0 };//创建一个数组，储存五次成绩
    int i, j = 0;
    double sum = 0;

    for (i = 1; i <= 5; i++)//一次循环，进来处理一个学生
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%lf", &arr[j]);
            sum += arr[j];//key：在输入超级的时候顺便就把成绩累加起来
        }
        for (j = 0; j < 5; j++)//再利用循环打印出成绩
        {
            printf("%.1lf ", arr[j]);
        }
        printf("%.1lf", sum);

    }

    return 0;
}