#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[30][30] = { 0 };
	int i = 0;//i��j��ѭ�����Ʊ������ֱ�����к���
	int j = 0;

	int m = 0;//m��n���û����룬������������ж�����
	scanf("%d",& m);
	for (i = 0; i < m; i++)
	{
		arr[i][0] = arr[i][i] = 1;//һ��ѭ�����㶨��һ�кͶԽ��ߵ�ֵ
	}
	for (i = 2 ; i < m; i++)//�ӵ�3�п�ʼ
	{
		for (j = 1; j < i; j++)//�ڼ��о�������һ���м���//�ӵ�2�п�ʼ
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//������ǹ���
		}
	}
	for (i = 0; i <m; i++)
	{
		for (j = 0; j <i+1 ; j++)//ע�⣬������i+1��i��i�������ǽǱ�0�б�ʾ��1��,��Ӧ1�У�������i+1
		{

			printf("%d ", arr[i][j]);

		}
		printf("\n");//�ո����٣������ÿһ�к�Ҫ����
	}
	return 0;
}