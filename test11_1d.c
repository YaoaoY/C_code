#define _CRT_SECURE_NO_WARNINGS 1
#define M 4
#define N 5
#include<stdio.h>
//�ҳ���λΪ����Ԫ�����ֵ����λ��
int main()
{
	int arr[M][N] = { 0 };
	int i = 0;
	int j = 0;
	int max = arr[0][0];
	int row = 0;
	int len = 0;

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j])
			{
				max = arr[i][j];//
				row = i;
				len = j;//����ֻ���ҵ����ɣ�û�н���
			}
		}
	}
	//��������ѭ�����ǰ�����Ԫ�غ�max�Ƚϣ�������ѭ��������max�д�ŵļ�Ϊ���ֵ��row��lenͬ��
	printf("���Ԫ��Ϊ��%d,�ڵ�%d�У��ڵ�%d��\n", max, row, len);
	return 0;
}
