#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����Ԫ�����������Խ��ߺ�
int main()
{
	int arr[30][30] = { 0 };
	int m = 0;//m��n�ֱ�Ϊ�û����룬��ʾ�����ж�����
	int n = 0;
	scanf("%d %d", &m, &n);

	int sum1 = 0;//���Խ���
	int sum2 = 0;//���Խ���

	int i = 0;
	int j = 0;//i��j��Ϊѭ�����Ʊ���
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);			
		}
	}
	for (i = 0; i < m; i++)//Сtip:��һ��ѭ�����ɽ��
	{
		sum1 += arr[i][i];
		sum2 += arr[i][n - i - 1];
		//ע�⣬����Ͳ�����һ������һ������ˣ���ð�ȫ�������꣬�ſ�����ͣ���Ȼ�㶼��û�������꣬�����Ԫ���в���һ�����������˵��0��
	}
	

	printf("���Խ��ߺ�Ϊ��%d\n", sum1);
	printf("���Խ��ߺ�Ϊ��%d\n", sum2);

	return 0;
}