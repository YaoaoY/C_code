#define _CRT_SECURE_NO_WARNINGS 1
//二维数组：两个数组相乘
#include<stdio.h>
int main()
{
	int arr1[30][30] = { 0 };
	int arr2[30][30] = { 0 };
	int m = 0;//为arr1的行数
	int n = 0;//为arr2的列数
	int p = 0;//k为arr1的列数，为arr2的行数
	scanf("%d %d %d", &m, &n, &p);
	int arr3[30][30] = { 0 };//arr3为arr1、arr2两个数组相乘后产生的新数组
	
	int i = 0;
	int j = 0;//i和j是循环控制变量
	int k = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
		{
			scanf("%d", &arr1[i][j]);//输入arr1
		}
	}
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr2[i][j]);//输入arr2
		}
	}
	for (i = 0; i < m; i++)//控制a的行数
	{
		for (j = 0; j < n; j++)//控制b的列数
		{
			for (k = 0; k < p; k++)//第三层循环控制矩阵C中每个元素相加的结果
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];//arr3的行数为arr1的行数，arr3的列数为arr2的列数
			}
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr3[i][j]);//输出arr3
		}
		printf("\n");
	}

	return 0;

}