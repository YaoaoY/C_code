#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//�ַ�������
/*
˼·����������
�Ȱ�ǰ�沿�������ٰѺ��沿�������������������
*/
void reverseStr(char* left, char* right) {
	assert(left && right);
	while (left < right) {
		char temp = (*left);
		(*left) = (*right);
		(*right) = temp;
		left++; right--;
	}
}
void removeLeft(char arr[], int num) {
	int len = strlen(arr);
	num %= len;
	reverseStr(arr, arr + num - 1);
	reverseStr(arr + num, arr + len - 1);
	reverseStr(arr, arr + len - 1);
}
int main() {
	char arr[] = { "abcdefg" };
	int num = 3;//��ת�ַ��������3���ַ�
	removeLeft(arr, num);
	for (int i = 0; i < 7; i++) {
		printf("%c ", arr[i]);
	}
	return 0;
}