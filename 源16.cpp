#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int sign = 1;
	double sum = 0.0;//ע�⣺sumҪ�ø�����

	for (i = 1; i <= 100; i++)
	{
		sum += sign * 1.0 / i;//ע�⣺1Ҫд��1.0
		sign = -sign;//key:���ŵı任
	}
	printf("sum=%f\n", sum);

	return 0;
}