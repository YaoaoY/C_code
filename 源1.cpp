#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	
	int choice = 0;
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("加油");
		break;
	case 2:
		printf("你会成功的");
		break;
	case 3:
		printf("一生努力，一生被爱");
		break;
		break;
	case 4:
		printf("未来可期");
	default:
		printf("stay hungry,stay foolish");
		break;
	}
	return 0;
}