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
        sum = 0;//�״������sum=0���³�ʼ���Ĳ��費Ҫ��������
        for (j = 1; j < i; j++)//�״������жϲ��ֲ���д��"j<sqrt(i)"��Ϊ���ﲢ����ֻ���ж�������������Ҫ����ȫ�����ӣ�����
        {
            if (i % j == 0)
            {
                sum += j;//jΪ���ӣ����ۼӵ�sum��
            }

        }
        if (sum == i)
        {
            printf("%5d\n", i);//"�����ÿ������ռ5λ��"
            for (j = 1; j < i; j++)//key:��һ������û���뵽�ģ�����һ��forѭ���������������ӡ����
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