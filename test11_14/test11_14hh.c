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
	char mine[ROW][COL] = { 0 };//ʵ���������������������
	char show[ROW][COL] = { 0 };//����չ�ֳ�����
	init(mine, ROW, COL, '0');//��ʼ������
	init(show, ROW, COL, '*');
	setMine(mine, ROW2, COL2);
	//print(mine, ROW2, COL2);//��ӡ���̣���Ȼ����������׵ľͲ���ӡ
	print(show, ROW2, COL2);//��ӡ�Ǵ�ӡʵ�ʵ����̣������ǣңϣף���COL��
	findMine(mine,show, ROW, COL);//ע�⣬���ﴫROW
	
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����������������룺");
		}

	} while (input);
}
int main()
{
	menu();
	test();
	return 0;
}