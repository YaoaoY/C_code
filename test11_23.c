#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


void Print(char* str)
{
    char* seps = " ";//注意，这里是个字符串
    //分隔符

    char* p = strtok(str, seps);//得到第一个标记的指针（注意这句要写在while循环外）
    if (p != NULL)//判断第一个标签可以取得
    {
        do//if成立就直接开始反转，这个操作无条件执行一次，所以用do_while循环
        {
            char* left = p;//利用双指针，进行常规的字符串反转操作
            char* right = p + strlen(p) - 1;
            char temp = 0;//abc
            while (left <= right)
            {
                temp = *(right);
                *(right) = *(left);
                *(left) = temp;
                left++;
                right--;
            }
            printf("%s ", p);

        } while (p = strtok(NULL, seps));
    }
    printf("\b");

}
int main()

{
    int n = 0;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        char str[10001] = { 0 };
        gets(str);//gets会吸收回车，并且会把回车自动转换为\0，不会把它留在缓冲区
        Print(str);//打印反转字符串

    }
    return(0);
}
