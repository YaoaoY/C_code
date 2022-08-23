#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main() {

	int choice=0;
	scanf("%d",&choice);

	if (choice == 1) {
		printf("好运藏在努力里\n");
	}else if (choice == 2) {
		printf("努力让自己变得更优秀然后骄傲的生活\n");
	}
	else if (choice == 3) {
		printf("我们都在奔赴各自不同的人生\n");

	}
	else {
		printf("迟到的向日葵也会开花\n");
	}
	return 0;
}