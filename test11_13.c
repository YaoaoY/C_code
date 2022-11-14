#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"//这里只用game.h就行（game.c好像也直接包括了）
void menu()
{
	printf("*************************************************************\n");
	printf("*******************    1,play   0,exit   ********************\n");
	printf("*************************************************************\n");
}
void game()//game函数的具体实现和它要用到的函数，我们放在game文件中
{
	char ret = 0;

	char chessMen[ROW][COL] = { 0 };//这个数字用来存放棋子chessman
	
	initBoard(chessMen,ROW,COL);//初始化棋盘（每次玩游戏之前棋子位置是空格）
	printBoard(chessMen, ROW, COL);//打印棋盘

	while (1)//下棋是一个循环的过程
	{

		playerMove(chessMen, ROW, COL);//玩家下棋//棋子为*
		printBoard(chessMen, ROW ,COL);//打印棋盘
		ret=isWin(chessMen, ROW, COL);//每方下完棋后要判断输赢
		if (ret != 'C')//c!=C的其他三种情况，游戏结束
		{
			break;
		}

		compMove(chessMen, ROW, COL);//电脑下棋，棋子为#
		printBoard(chessMen, ROW, COL);
 		ret=isWin(chessMen, ROW, COL);
		if (ret != 'C')//c!=C的其他三种情况，游戏结束
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("Player WON!\n");
	}
	else if (ret == '#')
	{
		printf("Computer WON!\n");
	}
	else if (ret == 'B')
	{
		printf("DogFall\n");//平局
	}

}

void test()
{
	//打印一个菜单
	int input = 0;
	srand((unsigned int)time(NULL));

	
	do//游戏至少实现一次所以用do——while循环
	{
		menu();//打印一个菜单
		scanf("%d", &input);
		switch (input)//input的值输入有多种，所以用switch选择语句
		{
		case 1:
			game();//将游戏的实现，封装到函数中
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入！");
		}
	} while (input);//input设置的很巧妙，除了0都会进来

}
int main()
{
	test();//将游戏的实现，封装到这个函数里面
	return 0;
}