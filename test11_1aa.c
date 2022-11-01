#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>//注意包含头文件

void menu()
{
	printf("***************************\n");
	printf("***** 1、play 0、exit *****\n");
	printf("***************************\n");
}
void game()
{
	//1产生随机数
	int ret = rand()%100+1;//固定ret的范围为0-100
						   //注意：rand（）函数要和srand()函数搭配起来使用.rand函数在使用之前要使用一个srand函数来设置随机数的生成器
	int num = 0;
	while (1)//猜数字过程的实现
	{
		printf("请输入数字：");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("猜大了\n");
			continue;
		}
		else if (num < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了!");
			break;
		}
		
	}
}
int main()
{
	srand((unsigned int)time(NULL));//时间戳C语言中，time函数会返回时间戳
	int input = 0;
	do//因为这个游戏流程至少执行一次，所以使用do while 循环
	{
		menu();//设置一个函数来打印菜单；
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏在这个game函数中实现
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入");
		}
	} while (input);//这里直接填input即可

	return 0;
}