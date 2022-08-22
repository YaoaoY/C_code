#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {

	int a = 7;

	int* b = &a;
	printf("%p\n", b);

	*b = 99;
	printf("%d\n", a);

	return 0;

}