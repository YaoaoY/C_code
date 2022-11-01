#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//矩阵元素求总和
int main()
{
	int arr[30][30] = { 0 };
	int m = 0;//m和n分别为用户输入，表示多少行多少列
	int n = 0;
	scanf("%d %d", &m, &n);
	
	int sum = 0;//求和变量

	int i = 0;
	int j = 0;//i和j均为循环控制变量
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];//在输入的过程中，顺带求和
		}
	}
	printf("%d\n", sum);
}