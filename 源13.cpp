#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
    int i = 0;
    int count = 0;

    for (i = 101; i <= 200; i+=2)
    {
        int j = 0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                break;

        }
        if (j>sqrt(i))
        {
            count++;
            printf("%d\n", i);

        }
    }
    printf("count=%d\n", count);//To see how many prime numbers are here

    return 0;
}