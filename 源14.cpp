#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
    printf("**********************************\n");
    printf("******    1,play  0,exit    ******\n");
    printf("**********************************\n");
}
void game()
{
    int guess = 0;
    int ret = rand() % 100 + 1;//��Ҫ�µ�����������1-100
   //printf("%d\n", ret);
    
    while (1)
    {
        printf("�������;>");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("��С��\n");
        }
        else if (guess > ret)
        {
            printf("�´���\n");
        }
        else
        {
            printf("��ϲ��,����ˣ�\n");
            break;
        }
    }

}
int main()
{
    int input = 0;
    
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d",&input);

        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            break;
        default:
            printf("ѡ���������������\n");
            break;
        }
    } while (input);//tip������������Ϊʲôѡ����������Ϊ1��0�ĺô���
    
    return 0;
}