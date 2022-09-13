#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int a, int b)//创建这个函数，Add前面的int表示这个函数的返回值为整形
{
	int z = 0;
	int z = a + b;

	return z;//返回值

}
int main()
{
	int a, b = 0;
	printf("请输入两个数值>:");
	scanf("%d %d", &a, &b);

	int sum = Add(a, b);//1,函数add创建。2，a,b为输入参数。3，创建一个整形变量sum来接收这个函数的返回值
	printf("%d\n", sum);
	return 0;
}