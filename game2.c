#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"game2.h"

void init(char arr[ROW][COL], int row, int col, char c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = c;
		}
	}
}
void print(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);//��ӡ��ʾ���к�
	}
	printf("\n");
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}
void setMine(char arr[ROW][COL], int row, int col)
{
	int nums = NUM;
	int m = 0;
	int n = 0;
	while (nums)
	{
		m = rand() % row + 1;
		n = rand() % col + 1;
		if (arr[m][n] == '0')
		{
			arr[m][n] = '1';
			nums--;
		}
	}
}
char countMine(char mine[ROW][COL], int dexR, int dexC)
{
	return mine[dexR][dexC + 1] + mine[dexR][dexC + 1] + mine[dexR - 1][dexC - 1] + mine[dexR - 1][dexC] + mine[dexR - 1][dexC + 1] + mine[dexR + 1][dexC - 1] + mine[dexR + 1][dexC] + mine[dexR + 1][dexC + 1]-8*'0';
}
void findMine(char mine[ROW][COL],char show[ROW][COL], int row, int col)
{
	int dexR = 0;
	int dexC = 0;
	int count = 0;

	while (count < ROW2 * COL2 - NUM)
	{
		printf("��ѡ�����꣺");
		scanf("%d %d", &dexR, &dexC);
		if (dexR <= ROW2 && dexR >= 1 && dexC <= COL2 && dexC >= 1)
		{
			if (show[dexR][dexC] != '*')
			{
				printf("�������ѱ��Ų��������������\n");
				continue;
			}
			if (mine[dexR][dexC] == '1')
			{
				printf("���ź����㱻ը����\n");
				print(show, ROW2, COL2);
				break;
			}
			else
			{
				int ret = countMine(mine, dexR, dexC);
				show[dexR][dexC] = ret + '0';
				print(show, ROW2, COL2);
				count++;
			}
		}
		else
		{
			printf("���������Ƿ�������������\n");
		}
	}
	if (count == ROW2 * COL2 - NUM)
	{
		printf("��ϲ�㡣���׳ɹ�\n");
		print(mine, ROW2, COL2);
	}
}