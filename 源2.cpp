#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {

	int a = 0;
	scanf("%d",&a);
    
	int b = a % 2;
	if (b == 1)
	{
		printf("奇数\n");
	}
	else
	{
		printf("偶数\n");
	}
	return 0;
	
}