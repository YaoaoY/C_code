#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int a, int b)//�������������Addǰ���int��ʾ��������ķ���ֵΪ����
{
	int z = 0;
	int z = a + b;

	return z;//����ֵ

}
int main()
{
	int a, b = 0;
	printf("������������ֵ>:");
	scanf("%d %d", &a, &b);

	int sum = Add(a, b);//1,����add������2��a,bΪ���������3������һ�����α���sum��������������ķ���ֵ
	printf("%d\n", sum);
	return 0;
}