#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
    char arr[81] = { 0 };//注意：是81而不是80个，要算上\0的数量
    int i = 0;
    int count = 0;
    int word = 0;

    //scanf("%s", arr);
    fgets(arr,81, stdin);
    arr[strlen(arr) - 1] = '\0';//避免浪费空间
    for (i = 0; arr[i] != '\0';i++)
    {
        if (arr[i] == ' ' || arr[i] == ',' || arr[i] == '.')//这里这个word和这个if语句设置的十分巧妙。形成的一种结果是：如果是空格等word被赋值为0，不会有机会进入到下一个选择，当不出现空格等，word被赋值为1，计算第一个首字母，（本质是计算首字母），为一个单词，此时word等于1，再进入循环，如果后面还有字母1,2都进不去，直至出现空格等，然后重复以上思路
        {
            word = 0;
        }
        else if (word == 0)
        {
            word = 1;
            count++;
        }
    }
    printf("%d", count);
    return(0);
}

