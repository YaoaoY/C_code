#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int CountJumpWays(int n)
{
	
	if (n == 1)
	{
		return 1;//ֻ��һ��̨��һ�ַ���
	}
	else if (n == 2)
	{
		return 2;//����̨�����ַ���
	}
	else
	{
		return CountJumpWays(n - 1) + CountJumpWays(n - 2);//ket
	}
}
int main()
{
	int step_num = 0;
	printf("������С����һ��Ҫ����̨����:>");
	scanf("%d", &step_num);

	int ret=CountJumpWays(step_num);
	
	printf("\nС����һ����%d������", ret);

	return 0;
}