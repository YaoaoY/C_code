#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double m = 0;
	int x = 0;
	int y = 0;
	int day = 0;
	scanf("%lf %d %d", &m, &x, &y);
	int sum = 0, temp = 0;
	double average = 0;

	for (day = 1; sum <= y; day++)
	{
		temp = (int)pow(2, day - 1);
		sum += x * temp;
	}
	if (sum > y)//�״�㣺��������������˵������Ϊִ���������Ǹ�forѭ����sum���п����Ǵ���y��
	{
		sum = sum - x * temp;
		average = sum * m / (day - 2);//�״������Ǽ�2���Ǽ�1������һ������Ϊsum>0����ӵ�һ������һ����sum>0���ֽ���for����ж϶�ӵ�һ��

	}
	else
	{
		average = sum * m / day;
	}

	printf("%.2lf\n", average);
	return(0);
}