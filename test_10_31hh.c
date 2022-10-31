#define _CRT_SECURE_NO_WARNINGS 1
//【题目描述】
//有一个升序序列数组（长度不大于20）, 输入一个整数并插入到数组中，要求输入后的数组元素是依然是按升序排列的。
//【输入说明】
//输入有三行，第一行表示初始数组元素个数n，第二行有n个升序数字，第三行表示要插入的数字
//【输入样例】
//4
//1 3 5 7
//2
//【输出样例】
//1 2 3 5 7
#define N 21
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[N] = { 0 };

	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int injct;//定义一个插入值
	scanf("%d", &injct);

	for (i = 0; i < n; i++)
	{
		if (injct <= arr[i])//这里利用了升序，所有从后往前，只要找到比它大的那个数，它就排在这个数前面
		{
			int j = 0;
			for (j = n-1; j >=i; j--)//利用循环，先使它后面的数先后挪一位（给它空出位置）
			{
				arr[j + 1] = arr[j];
			}
			arr[i] = injct;//最后把它放进这个空位中
			break;
		}
	}
	if (i >= n)//这个情况别忘了
	{
		arr[n] = injct;
	}
	for (i = 0; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}