#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int CountJumpWays(int n)
{
	
	if (n == 1)
	{
		return 1;//只有一个台阶一种方法
	}
	else if (n == 2)
	{
		return 2;//两个台阶两种方法
	}
	else
	{
		return CountJumpWays(n - 1) + CountJumpWays(n - 2);//ket
	}
}
int main()
{
	int step_num = 0;
	printf("请输入小青蛙一共要跳的台阶数:>");
	scanf("%d", &step_num);

	int ret=CountJumpWays(step_num);
	
	printf("\n小青蛙一共有%d种跳法", ret);

	return 0;
}