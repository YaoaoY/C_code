#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	int hund = num / 100;
	int ten = num / 10 % 10;//先去掉个位数（除10），让十位处在“个位”上，再根据个位求法来求
	int single = num % 10;//与10取余数，得到个位数

	printf("个位：%d，", single);
	printf("十位：%d，", ten);
	printf("百位：%d", hund);



	return(0);
}