﻿#define _CRT_SECURE_NO_WARNINGS 1

//将若干个整数（不多于30个），使用插入排序法按从小到大顺序排
//【输入说明】
//输入包括两行，第一行一个数字n表示需要排序的数字的个数，第二行有n个待排序的数字
//【输出说明】
//输出只有一行n个数字，显示排序结果。每个数字之间有一个半角空格
//【输入样例】
//5
//5 4 3 2 1
//【输出样例】
//1 2 3 4 5

#include<stdio.h>
int main()
{
    int arr[30] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)//注意，这里是n-1
    {
        int bord = i;
        int temp = arr[i + 1];
        while (bord >= 0)
        {

            if (temp < arr[bord])
            {
                arr[bord + 1] = arr[bord];
                bord--;
            }
            else
            {
                break;
            }
        }
        arr[bord + 1] = temp;

    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }




    return 0;
}