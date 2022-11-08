#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void move(char tower1, char tower3)//表示每次移动一个盘子的具体实现
{
	printf("%c————>%c\n", tower1,tower3);
}
void HanoiTower(char tower1,char tower2,char tower3, int n)//表示的是tower1借助于tower2把n个盘子按照汉诺塔的方法移动到tower3上去
{
	if (n == 1)
	{
		move(tower1,tower3);
	}
	else
	{
		HanoiTower(tower1, tower3, tower2, n - 1);//先把n-1个盘子由tower1借助tower3移动到tower2上去
		move(tower1, tower3);//把tower1最底下那个移动到tower3上去
		HanoiTower(tower2, tower1, tower3, n - 1);//把tower2上的n-1个借助tower1移动到tower3上去
	}
}
int main()
{
	int n = 0;
	printf("请输入A柱上共有盘子数:>");
	scanf("%d", &n);
	char tower1 = 'A';
	char tower2 = 'B';
	char tower3 = 'C';

	HanoiTower(tower1,tower2,tower3 ,n);
	return 0;
}