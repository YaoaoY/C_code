#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����Ԫ�����к�
int main()
{
	int arr[30][30] = { 0 };
	int m = 0;//m��n�ֱ�Ϊ�û����룬��ʾ�����ж�����
	int n = 0;
	scanf("%d %d", &m, &n);

	int sum[30] = { 0 };//ÿһ�ж�Ҫ��ͣ�����ͽ���ŵ�һ��������

	int i = 0;
	int j = 0;//i��j��Ϊѭ�����Ʊ���
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
			sum[i] += arr[i][j];//i���ú��ж�Ӧ
		}
	}
	for (i = 0; i < m; i++)
	{
		printf("%d\n", sum[i]);//�ø�forѭ�������ͽ��
	}
}