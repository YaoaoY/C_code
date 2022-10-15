#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 
int main()
{
    int x, y, i, j, sign=0, count = 0;
    scanf("%d %d", &x, &y);

    if(x<y)
    { 
        for (i = x; i <= y; i++)
        {
            sign = 0;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    sign = 1;
                    break;
                }
            }
            if (sign == 0)
            {
                printf("%d ", i);
                count++;

                if (count % 5 == 0)
                {
                    printf("\n");
                }

            }
        }
    }
    else
    {
        for (j = 2; j < x; j++)
        {
            sign = 0;
            if (x % j == 0)
            {
                sign = 1;
                break;
            }
            
        }
        if (sign == 0)
        {
            printf("%d", x);
        }
        else
        {
            printf("нч");
        }
    }

    return 0;
}