#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int sign = 1;
	double sum = 0.0;//注意：sum要用浮点型

	for (i = 1; i <= 100; i++)
	{
		sum += sign * 1.0 / i;//注意：1要写成1.0
		sign = -sign;//key:符号的变换
	}
	printf("sum=%f\n", sum);

	return 0;
}