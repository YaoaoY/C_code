#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main() {

	int choice=0;
	scanf("%d\n",&choice);

	if (choice == 1) {
		printf("���˲���Ŭ����\n");
	}else if (choice == 2) {
		printf("Ŭ�����Լ���ø�����Ȼ�󽾰�������\n");
	}
	else if (choice == 3) {
		printf("���Ƕ��ڱ������Բ�ͬ������\n");

	}
	else {
		printf("�ٵ������տ�Ҳ�Ὺ��\n");
	}
	return 0;
}