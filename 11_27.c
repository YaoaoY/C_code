#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//
//{/*��������ʱ����2��������Ԫ��
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);*/
//	return 0;
//}

//ͳ��32λ����������1�ĸ���
//int theNumberof1(int b)
//{
//	int cnt = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		cnt += (b >> i) & 1;
//	}
//	return cnt;
//}
//int main()
//{
//	int b = 0;
//	scanf("%d", &b);
//	int ret = theNumberof1(b);
//	printf("%d", ret);
//	return 0;
//}

//��ӡ������������λ��ż��λ
//void Print(int n)
//{
//	//��ӡż��λ
//	for (int i = 30; i >=0 ; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
// 
// 
// 
//int the_diff_num(int a, int b)
//{
//	int c = a ^ b;
//	int cnt = 0;
//	while (c)
//	{
//		cnt++;
//		c = c & (c - 1);//ͳ��c���ж��ٸ�1
//	}
//	return cnt;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = the_diff_num(a, b);
//	printf("%d", ret);
//	return 0;
//}