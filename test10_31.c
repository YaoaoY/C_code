#define _CRT_SECURE_NO_WARNINGS 1
//����Ŀ��������ͳ�Ƶ�Ʊ������λ��ѡ�ˣ���ŷֱ�Ϊ��1��2��3��4��ͳ��ÿλ��ѡ�˵�Ʊ��
#include<stdio.h>
int main()
{
	int sum[4] = { 0 };//����һ�����飬�����ĸ�Ԫ�أ��ֱ��Ӧ�ĸ��˵�Ʊ���ܺ�
	int c = 0;
	int i = 0;
	printf("��Ϊ��ѡ��ͶƱ��");
	while ((c = getchar()) != '\n')//���»س���\n'˵���������Ѿ�ͶƱ���
	{
		if (c == '1')
		{
			sum[0]++;
		}
		else if (c == '2')
		{
			sum[1]++;
		}
		else if (c == '3')
		{
			sum[2]++;
		}
		else if (c == '4')
		{
			sum[3]++;
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d��ѡ����Ʊ����%d\n", i + 1, sum[i]);
	}
	return 0;
}