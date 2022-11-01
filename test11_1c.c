#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//矩阵元素求主、辅对角线和
int main()
{
	int arr[30][30] = { 0 };
	int m = 0;//m和n分别为用户输入，表示多少行多少列
	int n = 0;
	scanf("%d %d", &m, &n);

	int sum1 = 0;//主对角线
	int sum2 = 0;//辅对角线

	int i = 0;
	int j = 0;//i和j均为循环控制变量
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);			
		}
	}
	for (i = 0; i < m; i++)//小tip:用一个循环即可解决
	{
		sum1 += arr[i][i];
		sum2 += arr[i][n - i - 1];
		//注意，这里就不可以一边输入一边求和了，你得把全部输入完，才可以求和，不然你都还没有输入完，你这个元素中不是一个随机数或者说是0吗
	}
	

	printf("主对角线和为：%d\n", sum1);
	printf("辅对角线和为：%d\n", sum2);

	return 0;
}