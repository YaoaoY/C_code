#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"//����������ͷ�ļ�
void initBoard(char chessMen[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			chessMen[i][j] = ' ';//��ʼ��Ϊ�ո�
		}
	}
}
void printBoard(char chessMen[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//�������̵�һ��
	{
		for (j = 0; j < col; j++)//����һ�е��ϰ벿��
		{
			printf(" %c ", chessMen[i][j]);
			if (j < col - 1)
			{
				printf("|");//�������ұ�û������
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
		printf("��ѡ�������µ��������꣺\n");
		int rowP = 0;
		int colP = 0;
		scanf("%d %d", &rowP, &colP);

		if (rowP >= 1 && rowP <= row && colP >= 1 && colP <= col)//�ж������Ƿ�Ϸ�
		{
			if (chessMen[rowP-1][colP-1] == ' ')//�жϸ�����û�б�ռ��
			{
				chessMen[rowP-1][colP-1] = '*';
				break;//����ɹ���������ѭ����
			}
			else
			{
				printf("�������ѱ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("�����������Ƿ�������������\n");
		}
	}
}
void compMove(char chessMen[ROW][COL], int row, int col)
{
	printf("�������壺\n");
	
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
//static���κ���������ʧȥ�ⲿ��������
static int isFull(char chessMen[ROW][COL], int row, int col)//���isFull����ֻ��֧��isWin�����������ģ�����ֻ��game,c�������ã����Ǿ�û�б�Ҫ������ͷ�ļ�������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (chessMen[i][j] == ' ')
			{
				return 0;//����δ��
			}
		}
	}
	return 1;//������

}
char isWin(char chessMen[ROW][COL],int row, int col)
{
	//�ж������Ƿ�������
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
//�ж���
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
	//�ж϶Խ���
	//���Խ���
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
	//���Խ���
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

	//���漸���ж��꣬��û������������ʱ�ߵ�����2�������1��ƽ�֣��������ˣ�2��������û��Ӯ������Ҳû����
	int ret=isFull(chessMen, ROW, COL);//�ж������Ƿ���
	if (ret)
	{
		return 'B';//ƽ��
	}

	return 'C';//��Ϸ����
}
