#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	scanf("%d,%d", &i,&j);

	int c = i % j;

	while (c!=0)
	{
		i = j;
		j = c;
		c = i % j;
	}

		printf("���Լ��Ϊ%d\n", j);

	return 0;
}