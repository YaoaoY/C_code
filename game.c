#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"//包含声明的头文件
void initBoard(char chessMen[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			chessMen[i][j] = ' ';//初始化为空格
		}
	}
}
void printBoard(char chessMen[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//控制棋盘的一行
	{
		for (j = 0; j < col; j++)//棋盘一行的上半部分
		{
			printf(" %c ", chessMen[i][j]);
			if (j < col - 1)
			{
				printf("|");//棋盘最右边没有竖杠
			}
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			printf("___");
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}
void playerMove(char chessMen[ROW][COL], int row, int col)
{
	
	while (1)
	{
		printf("请选择您将下的棋子坐标：\n");
		int rowP = 0;
		int colP = 0;
		scanf("%d %d", &rowP, &colP);

		if (rowP >= 1 && rowP <= row && colP >= 1 && colP <= col)//判断坐标是否合法
		{
			if (chessMen[rowP-1][colP-1] == ' ')//判断该坐标没有被占用
			{
				chessMen[rowP-1][colP-1] = '*';
				break;//下棋成功，则跳出循环；
			}
			else
			{
				printf("该坐标已被占用，请重新输入\n");
			}
		}
		else
		{
			printf("您输入的坐标非法，请重新输入\n");
		}
	}
}
void compMove(char chessMen[ROW][COL], int row, int col)
{
	printf("电脑下棋：\n");
	
	while (1)
	{
		int rowC = 0;
		int colC = 0;
		rowC = rand() % row;
		colC = rand() % col;
		if (chessMen[rowC][colC] == ' ')
		{
			chessMen[rowC][colC] = '#';
			break;
		}
		else
			continue;
	}
}
//static修饰函数，函数失去外部连接属性
static int isFull(char chessMen[ROW][COL], int row, int col)//这个isFull函数只是支持isWin函数而产生的，并且只在game,c中起作用，我们就没有必要把他在头文件中声明
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (chessMen[i][j] == ' ')
			{
				return 0;//棋盘未满
			}
		}
	}
	return 1;//棋盘满

}
char isWin(char chessMen[ROW][COL],int row, int col)
{
	//判断行上是否有连续
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i = 0; i < row; i++)
	{
		flag = 0;
		for (j = 0; j < col-1; j++)
		{
			if (chessMen[i][j] != chessMen[i][j + 1])
			{
				flag = 1;
				break;
			}
		}
		if ((!flag) &&( chessMen[i][j]!=' '))
		{
			return chessMen[i][j];
		}
	} 
//判断列
	for (j = 0; j < col; j++)
	{
		flag = 0;
		for (i = 0; i < row - 1; i++)
		{
			if (chessMen[i][j] != chessMen[i+1][j])
			{
				flag = 1;
				break;
			}
		}
		if ((!flag) && (chessMen[i][j]!=' '))
		{
			return chessMen[i][j];
		}
	}
	//判断对角线
	//主对角线
	for (i = 0; i < row-1; i++)
	{
		flag = 0;
		if (chessMen[i][i] != chessMen[i + 1][i + 1])
		{
			flag = 1;
			break;
		}
	}
	if ((!flag) && (chessMen[i][i]!=' '))
	{
		return chessMen[i][i];
	}
	//副对角线
	for (i = 0; i < row - 1; i++)
	{
		flag = 0;
		if (chessMen[i][col-1-i] != chessMen[i + 1][col-2-i])
		{
			flag = 1;
			break;
		}
	}
	if ((!flag) && (chessMen[i][col-1-i] != ' '))
	{
		return chessMen[i][col-1-i];
	}

	//上面几种判断完，还没跳出函数，此时走到这有2种情况：1、平局（棋盘满了）2、继续（没人赢，棋盘也没满）
	int ret=isFull(chessMen, ROW, COL);//判断棋盘是否满
	if (ret)
	{
		return 'B';//平局
	}

	return 'C';//游戏继续
}
