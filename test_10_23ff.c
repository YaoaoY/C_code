#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	int hund = num / 100;
	int ten = num / 10 % 10;//��ȥ����λ������10������ʮλ���ڡ���λ���ϣ��ٸ��ݸ�λ������
	int single = num % 10;//��10ȡ�������õ���λ��

	printf("��λ��%d��", single);
	printf("ʮλ��%d��", ten);
	printf("��λ��%d", hund);



	return(0);
}