#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
int isLeftMove(char arr1[], char arr2[]) {
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2) {
		return 0;
	}
	strncat(arr1, arr1, len1);
	return (strstr(arr1, arr2)!=NULL)?1:0;
}
int main() {
	char arr1[] = {"abcdefg"};
	char arr2[] = {"bcdefga"};
	if (isLeftMove(arr1, arr2)) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}