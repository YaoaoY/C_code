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
    {//�������轫flag���³�ʼ��Ϊ0
        for (m = 0; m < X / 3; m++)
        {
            for (x = 0; x < X; x += 3)//ע�⣺����x�������С���ĸ�����������+3
            {
                if ((g * 5 + m * 3 + x / 3 == X) && (g + m + x == X))
                {
                    printf("����%d,ĸ��%d,С��%d\n", g, m, x);
                    flag = 1;//flag������ǣ�����ֻҪ��һ����������ôflag�ͻ����1
                }

            }
        }
    }
    if (flag == 0)//һ�ν���if������������������û�У���˵�����޽⡱
    {
        printf("�޽�");
    }
    return(0);
}