#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int* pa, int* pb)//用指针变量来接收地址
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

	swap(&a, &b);//传地址

	printf("a=%d,b=%d\n", a, b);

	return 0;
}