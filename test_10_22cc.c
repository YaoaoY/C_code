#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int a = 1;//注意确定好第一项
    printf("%d ", a);
    scanf("%d", &n);
    for (i = 2; i <= n; i++)//直接从第二项开始
    {
        if (i % 2 == 0)
        {
            a = 2 * a;//用一个变量a即可表示每一项
        }
        else
        {
            a = 2 * a + 1;
        }
        printf("%d ", a);
    }

    return(0);
}