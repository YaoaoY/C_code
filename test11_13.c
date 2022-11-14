#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"//����ֻ��game.h���У�game.c����Ҳֱ�Ӱ����ˣ�
void menu()
{
	printf("*************************************************************\n");
	printf("*******************    1,play   0,exit   ********************\n");
	printf("*************************************************************\n");
}
void game()//game�����ľ���ʵ�ֺ���Ҫ�õ��ĺ��������Ƿ���game�ļ���
{
	char ret = 0;

	char chessMen[ROW][COL] = { 0 };//������������������chessman
	
	initBoard(chessMen,ROW,COL);//��ʼ�����̣�ÿ������Ϸ֮ǰ����λ���ǿո�
	printBoard(chessMen, ROW, COL);//��ӡ����

	while (1)//������һ��ѭ���Ĺ���
	{

		playerMove(chessMen, ROW, COL);//�������//����Ϊ*
		printBoard(chessMen, ROW ,COL);//��ӡ����
		ret=isWin(chessMen, ROW, COL);//ÿ���������Ҫ�ж���Ӯ
		if (ret != 'C')//c!=C�����������������Ϸ����
		{
			break;
		}

		compMove(chessMen, ROW, COL);//�������壬����Ϊ#
		printBoard(chessMen, ROW, COL);
 		ret=isWin(chessMen, ROW, COL);
		if (ret != 'C')//c!=C�����������������Ϸ����
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
		printf("DogFall\n");//ƽ��
	}

}

void test()
{
	//��ӡһ���˵�
	int input = 0;
	srand((unsigned int)time(NULL));

	
	do//��Ϸ����ʵ��һ��������do����whileѭ��
	{
		menu();//��ӡһ���˵�
		scanf("%d", &input);
		switch (input)//input��ֵ�����ж��֣�������switchѡ�����
		{
		case 1:
			game();//����Ϸ��ʵ�֣���װ��������
			break;
		case 0:
			break;
		default:
			printf("����������������룡");
		}
	} while (input);//input���õĺ��������0�������

}
int main()
{
	test();//����Ϸ��ʵ�֣���װ�������������
	return 0;
}