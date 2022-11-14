#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game2.h"
void menu()
{
	printf("*******************************************************************\n");
	printf("*****************************  1,play  ****************************\n");
	printf("*****************************  0,exit  ****************************\n");
	printf("*******************************************************************\n");
}
void game()
{
	char mine[ROW][COL] = { 0 };//实际设置雷设置在这个里面
	char show[ROW][COL] = { 0 };//这是展现出来的
	init(mine, ROW, COL, '0');//初始化数组
	init(show, ROW, COL, '*');
	setMine(mine, ROW2, COL2);
	//print(mine, ROW2, COL2);//打印棋盘，当然，这个含有雷的就不打印
	print(show, ROW2, COL2);//打印是打印实际的棋盘，所以是ＲＯＷ２和COL１
	findMine(mine,show, ROW, COL);//注意，这里传ROW
	
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入：");
		}

	} while (input);
}
int main()
{
	menu();
	test();
	return 0;
}