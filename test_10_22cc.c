#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int a = 1;//ע��ȷ���õ�һ��
    printf("%d ", a);
    scanf("%d", &n);
    for (i = 2; i <= n; i++)//ֱ�Ӵӵڶ��ʼ
    {
        if (i % 2 == 0)
        {
            a = 2 * a;//��һ������a���ɱ�ʾÿһ��
        }
        else
        {
            a = 2 * a + 1;
        }
        printf("%d ", a);
    }

    return(0);
}