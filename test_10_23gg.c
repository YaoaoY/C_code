#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    int date = 0;
    int days = 0;
    scanf("%d%d%d", &year, &month, &date);

    int leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    switch (month)
    {
    case 12:
        days += 30;//注意，这里是30，而不是31，依次往后挪，加的并不是该月份的天数
    case 11:
        days += 31;
    case 10:
        days += 30;
    case 9:
        days += 31;
    case 8:
        days += 31;
    case 7:
        days += 30;
    case 6:
        days += 31;
    case 5:
        days += 30;
    case 4:
        days += 31;
    case 3:
        days += 28 + leap;//leap的作用体现出来了哦，用来区分是否为闰年
    case 2:
        days += 31;
    case 1:
        days += date;//注意，这里是date而不是31
    }
    printf("%d", days);



    return 0;
}