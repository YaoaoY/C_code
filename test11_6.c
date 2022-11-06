#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
int Strlen(char* arr)
{
	//return sizeof(arr) / sizeof(char);//不能写成这种形式，因为arr在数组传参使已经退化成指针常量了
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

void reverse_string(char* arr)
{//非递归形式实现
	/*int left = 0;
	int right = Strlen(arr)-1;
	char temp;
	while (left < right)
	{
		temp = *(arr + left);
		*(arr + left) = *(arr + right);
		*(arr + right) = temp;
		left++;
		right--;
	}*/
	//递归形式：
	char temp = *arr;//1：先把前面一个需要交换的放入空瓶
	int len = Strlen(arr);
	*arr = *(arr + len - 1);//2：把后面对应需要交换的元素放入正确位置
	*(arr + len-1) = '\0';//3:放入字符串结束标志，方便下一个递归的进行
	if (len >= 2)//说明还有元素没有交换完
	{
		reverse_string(arr + 1);//递归的实现
	}
	*(arr + len - 1) = temp;//递归回归的时候，把空瓶里面的元素放到正确位置

}
int main()
{
	char arr[30] = "abcdefg";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}