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
    int ret = rand() % 100 + 1;//把要猜的数字设置在1-100
   //printf("%d\n", ret);
    
    while (1)
    {
        printf("请猜数字;>");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("猜小了\n");
        }
        else if (guess > ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("恭喜你,答对了！\n");
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
        printf("请选择:>");
        scanf("%d",&input);

        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            break;
        default:
            printf("选择错误，请重新输入\n");
            break;
        }
    } while (input);//tip：这里体现了为什么选择数字设置为1，0的好处。
    
    return 0;
}