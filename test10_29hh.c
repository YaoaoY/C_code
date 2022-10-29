#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10
int main()
{
	int arr[N] = {0};//创建一个整形数组
	int temp = 0;//创建一个变量，作用是在交换元素的过程中起到“空瓶”作用
	int i = 0;
	for (i = 0; i < N; i++)//for循环输入10个数字
	{
		scanf("%d", &arr[i]);
	}

	//循环控制变量i、j
	int j = 0;
	int the_last = N-1;

	for (i = 0; i < N-1; i++)//外层循环：控制趟数
	{
		int flag = 0;//每一趟 中设计一个标记变量
		for (j = 0; j <the_last ; j++)//这里j的作用有2个，第二个是充当元素下标（所以从0开始的好处）
		{
			if (arr[j] > arr[j + 1])//交换
			{
				flag = 1;//如果有元素发生了交换，标记为1

				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
		the_last = j;//注意哦，要写在第二层循环的外头，因为要等一趟比完了，才能确定下一趟的j<the_last

		if (flag == 0)//flag==0说明一次交换都没有发生，直接跳出外层循环
		{
			break;
		}

	}
	
	for ( i = 0; i < N ; i++)//输出
	{
		printf("%d\n", arr[i]);
	}


	return 0;

}