#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void move(char tower1, char tower3)//��ʾÿ���ƶ�һ�����ӵľ���ʵ��
{
	printf("%c��������>%c\n", tower1,tower3);
}
void HanoiTower(char tower1,char tower2,char tower3, int n)//��ʾ����tower1������tower2��n�����Ӱ��պ�ŵ���ķ����ƶ���tower3��ȥ
{
	if (n == 1)
	{
		move(tower1,tower3);
	}
	else
	{
		HanoiTower(tower1, tower3, tower2, n - 1);//�Ȱ�n-1��������tower1����tower3�ƶ���tower2��ȥ
		move(tower1, tower3);//��tower1������Ǹ��ƶ���tower3��ȥ
		HanoiTower(tower2, tower1, tower3, n - 1);//��tower2�ϵ�n-1������tower1�ƶ���tower3��ȥ
	}
}
int main()
{
	int n = 0;
	printf("������A���Ϲ���������:>");
	scanf("%d", &n);
	char tower1 = 'A';
	char tower2 = 'B';
	char tower3 = 'C';

	HanoiTower(tower1,tower2,tower3 ,n);
	return 0;
}