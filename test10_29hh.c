#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10
int main()
{
	int arr[N] = {0};//����һ����������
	int temp = 0;//����һ���������������ڽ���Ԫ�صĹ������𵽡���ƿ������
	int i = 0;
	for (i = 0; i < N; i++)//forѭ������10������
	{
		scanf("%d", &arr[i]);
	}

	//ѭ�����Ʊ���i��j
	int j = 0;
	int the_last = N-1;

	for (i = 0; i < N-1; i++)//���ѭ������������
	{
		int flag = 0;//ÿһ�� �����һ����Ǳ���
		for (j = 0; j <the_last ; j++)//����j��������2�����ڶ����ǳ䵱Ԫ���±꣨���Դ�0��ʼ�ĺô���
		{
			if (arr[j] > arr[j + 1])//����
			{
				flag = 1;//�����Ԫ�ط����˽��������Ϊ1

				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
		the_last = j;//ע��Ŷ��Ҫд�ڵڶ���ѭ������ͷ����ΪҪ��һ�˱����ˣ�����ȷ����һ�˵�j<the_last

		if (flag == 0)//flag==0˵��һ�ν�����û�з�����ֱ���������ѭ��
		{
			break;
		}

	}
	
	for ( i = 0; i < N ; i++)//���
	{
		printf("%d\n", arr[i]);
	}


	return 0;

}