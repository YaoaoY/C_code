#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
int Strlen(char* arr)
{
	//return sizeof(arr) / sizeof(char);//����д��������ʽ����Ϊarr�����鴫��ʹ�Ѿ��˻���ָ�볣����
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

void reverse_string(char* arr)
{//�ǵݹ���ʽʵ��
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
	//�ݹ���ʽ��
	char temp = *arr;//1���Ȱ�ǰ��һ����Ҫ�����ķ����ƿ
	int len = Strlen(arr);
	*arr = *(arr + len - 1);//2���Ѻ����Ӧ��Ҫ������Ԫ�ط�����ȷλ��
	*(arr + len-1) = '\0';//3:�����ַ���������־��������һ���ݹ�Ľ���
	if (len >= 2)//˵������Ԫ��û�н�����
	{
		reverse_string(arr + 1);//�ݹ��ʵ��
	}
	*(arr + len - 1) = temp;//�ݹ�ع��ʱ�򣬰ѿ�ƿ�����Ԫ�طŵ���ȷλ��

}
int main()
{
	char arr[30] = "abcdefg";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}