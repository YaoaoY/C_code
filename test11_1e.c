#define _CRT_SECURE_NO_WARNINGS 1
//输出转置数组
//建立一个n*n行的二维数组。求它的转置矩阵并且输出结果
//补充：转置矩阵：行和列进行交换
#include<stdio.h>
int main()
{
	int arr[30][30] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 1; i < n; i++)
	{
		int temp = 0;
		for (j = 0; j < i; j++)//注意这里是j<i
		{
			//arr[i][j] = arr[j][i];//这种写法是错误的，不能实现交换，这是赋值
			temp = arr[j][i];
			arr[j][i] = arr[i][j];//这才是真正的交换
			arr[i][j] = temp;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
