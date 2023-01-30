#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int findValue(int arr[3][3], int *r, int *c, int value) {
	while ((*r) <=2 && (*c) >= 0) {
		if (value > arr[*r][*c]) {
			(*r)++;
		}
		else if (value < arr[*r][*c]) {
			(*c)--;
		}
		else {
			return 1;//找到了
		}
	}
	return 0;
}
int main() {
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int r = 0, c = 2;
	int value = 7;
	
	if (findValue(arr, &r, &c, value)) {
		printf("找到了，坐标为(%d,%d)", r, c);
	}
	else {
		printf("找不到");
	}
	return 0;
}