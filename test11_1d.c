#define _CRT_SECURE_NO_WARNINGS 1
#define M 4
#define N 5
#include<stdio.h>
//找出二位为数组元素最大值，及位置
int main()
{
	int arr[M][N] = { 0 };
	int i = 0;
	int j = 0;
	int max = arr[0][0];
	int row = 0;
	int len = 0;

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j])
			{
				max = arr[i][j];//
				row = i;
				len = j;//我们只用找到即可，没有交换
			}
		}
	}
	//上面两个循环，是把所有元素和max比较，经过大循环结束后，max中存放的即为最大值，row和len同理
	printf("最大元素为：%d,在第%d行，在第%d列\n", max, row, len);
	return 0;
}
