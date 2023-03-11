
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define ERROR 0
#define OK 1
#define TURE 1
#define FAULE -1

#define Max_size 100
#define ElemType int

//�ṹ�嶨��
typedef struct {
	ElemType elem[Max_size];
	ElemType last;
} Seqlist;

//��������
int menu_select();
int Add_A_List(Seqlist*);
int Del_A_List(Seqlist*);
int Add_B_List(Seqlist*);
int Del_B_List(Seqlist*);
int Auto_Del_List(Seqlist*, Seqlist*);
int printA(Seqlist*);
int printB(Seqlist);

// main()����
int main() {
	Seqlist ListA, ListB;
	ListA.last = -1; //ע��Ӧ��ǰ��ֵ
	ListB.last = -1;
	for (;;) {
		switch (menu_select()) {
		case 1:
			printf("�������Ա�A�е�Ԫ��\n");
			Add_A_List(&ListA);
			break;
		case 2:
			printf("ɾ�����Ա�A�е�Ԫ��\n");
			Del_A_List(&ListA);
			break;
		case 3:
			printf("�������Ա�B�е�Ԫ��\n");
			Add_B_List(&ListB);
			break;
		case 4:
			printf("ɾ�����Ա�B�е�Ԫ��\n");
			Del_B_List(&ListB);
			break;
		case 5:
			printf("������Զ�ɾ��A�д���B�е�Ԫ��\n");
			Auto_Del_List(&ListA, &ListB);
			break;
		case 6:
			printf("��ʾ��A�е�Ԫ��\n");
			printA(&ListA);
			break;
		case 7:
			printf("��ʾ��B�е�Ԫ��\n");
			printB(ListB);
			break;
		case 0:
			printf("��ӭ�´�ʹ��\n");
			return 0;
		}
	}
} // main()��������

//�˵���������
int menu_select() {
	int sn;
	printf("===============================\n");
	printf("1���������Ա�A�е�Ԫ��\n");
	printf("2��ɾ�����Ա�A�е�Ԫ��\n");
	printf("3���������Ա�B�е�Ԫ��\n");
	printf("4��ɾ�����Ա�B�е�Ԫ��\n");
	printf("5��������Զ�ɾ��A�д���B�е�Ԫ��\n");
	printf("6����ʾ��A�е�Ԫ��\n");
	printf("7����ʾ��B�е�Ԫ��\n");
	printf("0���˳�����\n");
	printf("=================================\n");
	printf("����0--7\n");
	for (;;) {
		scanf("%d", &sn);
		getchar();
		if (sn < 0 || sn > 7)
			printf("\n �����������ѡ�� 0--7S�� ");
		else
			break;
	}
	return sn;
}
//�������Ա�A�е�Ԫ��
int Add_A_List(Seqlist* ListA) {
	char flag = 'Y';
	while (flag == 'y' || flag == 'Y') {
		if (ListA->last >= Max_size - 1) {
			printf("���Ա�A�ռ�������\n\n");
			return ERROR;
		}
		else
			ListA->last++;
		printf("��Ҫ���������Ϊ:\n");
		scanf("%d", &ListA->elem[ListA->last]);
		printf("\n");
		printf("����������(y/n)");
		getchar();
		scanf("%c", &flag);
		printf("\n");
	}
	return OK;
}
//�������Ա�B�е�Ԫ��
int Add_B_List(Seqlist* ListB) {
	char flag = 'Y';
	while (flag == 'y' || flag == 'Y') {
		if (ListB->last >= Max_size - 1) {
			printf("���Ա�B�ռ�������\n\n");
			return ERROR;
		}
		else
			ListB->last++;
		printf("��Ҫ���������Ϊ:\n");
		scanf("%d", &ListB->elem[ListB->last]);
		printf("\n");
		printf("����������(y/n)");
		getchar();
		scanf("%c", &flag);
		printf("\n");
	}
	return OK;
}
//ɾ�����Ա�A�е�Ԫ��
int Del_A_List(Seqlist* ListA) {
	int i = 0, n;
	char flag = 'Y';
	if (ListA->last == -1) {
		printf("���Ա�Ϊ�գ�\n\n");
		return FAULE;
	}
	else {
		printf("��������Ҫɾ����Ԫ��\n");
		scanf("%d", &n);
		while (n != ListA->elem[i] && i <= ListA->last)
			i++;
		if (i <= ListA->last) {
			printf("Ҫɾ��������Ϊ%d\n", ListA->elem[i]);
			printf("��ȷ��Ҫɾ�����ͨѶ�ߵ���Ϣ��(y/n) ");
			getchar();
			scanf("%c", &flag);
			if (flag == 'y' || flag == 'Y')
				for (i = i + 1; i <= ListA->last; i++)
					ListA->elem[i - 1] = ListA->elem[i];
			ListA->last--;
			return OK;
		}
		else {
			printf("Ԫ�ز����ڣ�\n\n");
			return FAULE;
		}
	}

}
//ɾ�����Ա�B�е�Ԫ��
int Del_B_List(Seqlist* ListB) {
	int  i = 0, n=0;
	char flag;
	if (ListB->last == -1) {
		printf("���Ա�Ϊ�գ�\n\n");
		return FAULE;
	}
	else {
		printf("��������Ҫɾ����Ԫ��\n");
		scanf("%d", &n);
		while (n != ListB->elem[i] && i <= ListB->last)
			i++;
		if (i <= ListB->last) {
			printf("Ҫɾ��������Ϊ%d\n", ListB->elem[i]);
			printf("��ȷ��Ҫɾ�����ͨѶ�ߵ���Ϣ��(y/n) ");
			getchar();
			scanf("%c", &flag);
			if (flag == 'y' || flag == 'Y')
				for (i = n + 1; i <= ListB->last; i++)
					ListB->elem[i - 1] = ListB->elem[i];
			ListB->last--;
			return OK;
		}
		else {
			printf("Ԫ�ز����ڣ�\n\n");
			return FAULE;
		}
	}
}
//������Զ�ɾ��A�д���B�е�Ԫ��
/*
  TODO���Ա�B�е�ÿ��Ԫ�ؿ����Ƿ������Ա�A�У����ڣ������Ա�A�е�Ԫ��ɾ����
  ��ע�⣺��ֹ����֤ʱʹ�����������ʾ
 */
int Auto_Del_List(Seqlist* ListA, Seqlist* ListB) {
	//TODO��
	for (int i = 0; i < ListB->last; i++) {
		for (int j = 0; j < ListA->last; j++) {
			if (ListA->elem[j] == ListB->elem[i]) {
				for (int x = j; x < ListA->last-1; x++) {
					ListA->elem[j] = ListA->elem[j + 1];
				}
			}
		}
	}
	return 1;
}
//��ӡ
int printA(Seqlist* ListA) {
	int i;
	if (ListA->last == -1) {
		printf("���Ա�AΪ��\n");
		return ERROR;
	}
	for (i = 0; i <= ListA->last; i++) {
		printf("%4d", ListA->elem[i]);
	}
	printf("\n");
	return OK;
}
//��ӡ
int printB(Seqlist ListB) {
	int j;
	if (ListB.last == -1) {
		printf("���Ա�BΪ��\n");
		return ERROR;
	}
	for (j = 0; j <= ListB.last; j++) {
		printf("%4d", ListB.elem[j]);
	}
	printf("\n");
	return OK;
}
