#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;

	for (i = 1; i < 10; i++)
	{    
		
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//"-2"表示结果两位数，左对齐。
		}

		printf("\n");//这个很关键，换行！

	}
    
	return 0;
}
