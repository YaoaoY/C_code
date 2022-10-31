#define _CRT_SECURE_NO_WARNINGS 1
//【题目描述】：统计得票。有四位候选人，编号分别为：1、2、3、4，统计每位候选人得票。
#include<stdio.h>
int main()
{
	int sum[4] = { 0 };//创建一个数组，里面四个元素，分别对应四个人的票数总和
	int c = 0;
	int i = 0;
	printf("请为候选人投票：");
	while ((c = getchar()) != '\n')//按下回车’\n'说明所有人已经投票完成
	{
		if (c == '1')
		{
			sum[0]++;
		}
		else if (c == '2')
		{
			sum[1]++;
		}
		else if (c == '3')
		{
			sum[2]++;
		}
		else if (c == '4')
		{
			sum[3]++;
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d号选手总票数：%d\n", i + 1, sum[i]);
	}
	return 0;
}