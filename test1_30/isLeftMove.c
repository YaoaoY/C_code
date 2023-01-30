#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
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