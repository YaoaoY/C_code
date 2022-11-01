#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[30][30] = { 0 };
	int i = 0;//i和j是循环控制变量，分别控制行和列
	int j = 0;

	int m = 0;//m和n由用户输入，决定这个矩阵有多少行
	scanf("%d",& m);
	for (i = 0; i < m; i++)
	{
		arr[i][0] = arr[i][i] = 1;//一个循环，搞定第一列和对角线的值
	}
	for (i = 2 ; i < m; i++)//从第3行开始
	{
		for (j = 1; j < i; j++)//第几行决定了这一行有几列//从第2列开始
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//杨辉三角规律
		}
	}
	for (i = 0; i <m; i++)
	{
		for (j = 0; j <i+1 ; j++)//注意，这里是i+1。i和i本质上是角标0行表示第1行,对应1列，所以是i+1
		{

			printf("%d ", arr[i][j]);

		}
		printf("\n");//空格不能少，输出完每一行后要换行
	}
	return 0;
}