#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    char str[40][81] = { '0' };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        fgets(str[i], 80, stdin);//���scanf�е��Ǹ�\n����ȥ������Ҫ�Ӹ�getchar��ջ�����
        str[i][strlen(str[i]) - 1] = '\0';
    }
    int j = 0;
    char temp[81] = { '0' };
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)//ע�⣬������j��ʾ�Ǳ�
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        puts(str[i]);
    }

    return(0);
}