#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}


int main()
{
	int unsigned num = 0;

	scanf("%d", &num);

	print(num);
}