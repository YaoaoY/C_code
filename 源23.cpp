#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int is_prime_number(int x)
{   
	int j = 0;
	for (j = 2; j <= sqrt(x); j++);
	{
		if (x % j == 0)
			return 0;
	}
	return 1;//注意这个不能放在for循环里面了

}
int main()
{
	int number = 0;
	
	for (number = 101; number <= 200; number+=2)
	{
		if (is_prime_number(number) == 1)
		{
			printf("%d\n", number);
		}

	}
	return 0;
}