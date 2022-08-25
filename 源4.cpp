#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int sum = 0;
	int a = 1;
	int i = 0;
	int n = 0;
	

	for (n = 1; n <= 3; n++)
	{
		a = 1;

		for (i = 1; i <= n; i++)
		{
			
			a = a * i;	
		}
		sum = a + sum;  
	}

		printf("%d\n", sum);

	return 0;

}
