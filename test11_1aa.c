#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>//ע�����ͷ�ļ�

void menu()
{
	printf("***************************\n");
	printf("***** 1��play 0��exit *****\n");
	printf("***************************\n");
}
void game()
{
	//1���������
	int ret = rand()%100+1;//�̶�ret�ķ�ΧΪ0-100
						   //ע�⣺rand��������Ҫ��srand()������������ʹ��.rand������ʹ��֮ǰҪʹ��һ��srand�����������������������
	int num = 0;
	while (1)//�����ֹ��̵�ʵ��
	{
		printf("���������֣�");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("�´���\n");
			continue;
		}
		else if (num < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���!");
			break;
		}
		
	}
}
int main()
{
	srand((unsigned int)time(NULL));//ʱ���C�����У�time�����᷵��ʱ���
	int input = 0;
	do//��Ϊ�����Ϸ��������ִ��һ�Σ�����ʹ��do while ѭ��
	{
		menu();//����һ����������ӡ�˵���
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ�����game������ʵ��
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������");
		}
	} while (input);//����ֱ����input����

	return 0;
}