
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int iq = 0;
	while ((scanf("%d", &iq)) == 1)//scanf函数的返回值是实际读到的数据个数
		//这里也可以写成（scanf("%d",&iq)！=EOF）
	{
		if (iq >= 140)
		{
			printf("Genuis");
		}
	}
	return 0;
}