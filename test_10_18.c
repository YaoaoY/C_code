
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int iq = 0;
	while ((scanf("%d", &iq)) == 1)//scanf�����ķ���ֵ��ʵ�ʶ��������ݸ���
		//����Ҳ����д�ɣ�scanf("%d",&iq)��=EOF��
	{
		if (iq >= 140)
		{
			printf("Genuis");
		}
	}
	return 0;
}