#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	
	int choice = 0;
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("����");
		break;
	case 2:
		printf("���ɹ���");
		break;
	case 3:
		printf("һ��Ŭ����һ������");
		break;
		break;
	case 4:
		printf("δ������");
	default:
		printf("stay hungry,stay foolish");
		break;
	}
	return 0;
}