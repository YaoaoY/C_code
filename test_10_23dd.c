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
	if (sum > y)//易错点：这里必须加上特例说明，因为执行完上面那个for循环后，sum极有可能是大于y的
	{
		sum = sum - x * temp;
		average = sum * m / (day - 2);//易错，这里是减2不是减1，其中一个是因为sum>0而多加的一个，另一个是sum>0后又进入for语句判断多加的一个

	}
	else
	{
		average = sum * m / day;
	}

	printf("%.2lf\n", average);
	return(0);
}