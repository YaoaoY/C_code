#define _CRT_SECURE_NO_WARNINGS 1
//���ת������
//����һ��n*n�еĶ�ά���顣������ת�þ�����������
//���䣺ת�þ����к��н��н���
#include<stdio.h>
int main()
{
	int arr[30][30] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 1; i < n; i++)
	{
		int temp = 0;
		for (j = 0; j < i; j++)//ע��������j<i
		{
			//arr[i][j] = arr[j][i];//����д���Ǵ���ģ�����ʵ�ֽ��������Ǹ�ֵ
			temp = arr[j][i];
			arr[j][i] = arr[i][j];//����������Ľ���
			arr[i][j] = temp;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
