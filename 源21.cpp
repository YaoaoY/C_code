#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int* pa, int* pb)//��ָ����������յ�ַ
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;

	swap(&a, &b);//����ַ

	printf("a=%d,b=%d\n", a, b);

	return 0;
}