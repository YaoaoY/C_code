#define _CRT_SECURE_NO_WARNINGS 1
//��ά���飺�����������
#include<stdio.h>
int main()
{
	int arr1[30][30] = { 0 };
	int arr2[30][30] = { 0 };
	int m = 0;//Ϊarr1������
	int n = 0;//Ϊarr2������
	int p = 0;//kΪarr1��������Ϊarr2������
	scanf("%d %d %d", &m, &n, &p);
	int arr3[30][30] = { 0 };//arr3Ϊarr1��arr2����������˺������������
	
	int i = 0;
	int j = 0;//i��j��ѭ�����Ʊ���
	int k = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
		{
			scanf("%d", &arr1[i][j]);//����arr1
		}
	}
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr2[i][j]);//����arr2
		}
	}
	for (i = 0; i < m; i++)//����a������
	{
		for (j = 0; j < n; j++)//����b������
		{
			for (k = 0; k < p; k++)//������ѭ�����ƾ���C��ÿ��Ԫ����ӵĽ��
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];//arr3������Ϊarr1��������arr3������Ϊarr2������
			}
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr3[i][j]);//���arr3
		}
		printf("\n");
	}

	return 0;

}