#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {

	int n = 0;
	int i = 0;
	int sum = 0;
	int fac = 1;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		fac = i * fac;

		sum = fac + sum;

	}
	printf("sum=%d\n", sum);


	return 0;
}
