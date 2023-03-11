#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//����12��
#include <string.h>

#define ERROR 0
#define OK 1
#define TURE 1
#define FAULE -1

//�ṹ�嶨��
typedef struct Node {
	int i;
	struct Node* next;
} Node;

//��������
int menu_select(int);
void introduce();
void createnode(Node*);
void sort(Node*);
void destory(Node*);
void print(Node*);

// main()����
int main() {
	Node* head = NULL;
	int cnt = 0;
	for (;;)	 // ����ѭ��,ѡ��0 �˳�
	{
		switch (menu_select(cnt))	 // ���ò˵�������������ֵѡ���ܺ���
		{
		case 1:
			introduce();
			break;
		case 2:
			printf("����������(������־#):");
			destory(head);
			head = (Node*)malloc(sizeof(Node));
			head->next = NULL;
			cnt++;
			createnode(head);
			break;
		case 3:
			sort(head);
			print(head);
			break;
		case 0:
			printf(" �ټ���\n");				//�˳�ϵͳ
			destory(head);
			return 0;
		}
	}
} // main()��������

//�˵���������
int menu_select(int cnt) {
	int sn;
	printf("      �����Ԫ�ط���\n");		//��ʾ�˵�
	printf("==============================\n");
	printf("   1����Ŀ����\n");
	printf("   2����������\n");
	printf("   3����������������\n");
	printf("   0���˳�\n");
	printf("==============================\n");
	printf("  ��ѡ��0--3:  ");

	for (;;)		//�˵�����ѡ��
	{
		scanf("%d", &sn);
		if (sn < 0 || sn > 3)
			printf("\n ����ѡ�����������ѡ�� 0--3�� ");
		else if ((cnt == 0 && sn == 3))		//���밴�������
		{
			printf("\n  ->���ȴ�������<-  \n");
			printf("   ��ѡ���2�������");
			continue;
		}
		else
			break;
	}
	return sn;
}
//β�巨����
void createnode(Node* L) {
	Node* p, * q;
	int flag = 1, c;
	p = L;
	while (flag) {
		scanf("%d", &c);
		if (getchar() != '#')	// ����#����
		{
			q = (Node*)malloc(sizeof(Node));
			q->i = c;
			p->next = q;
			p = q;
		}
		else {
			flag = 0;
			p->next = NULL;
		}
	}
}
//����ڵ����
int count(Node* L) {
	Node* p = L;
	int i = 0;
	while (p->next != NULL) {
		i++;
	}
	return ++i;
}
/*
 TODO:��֪���Ա���Ԫ�ؾ�Ϊ����������㷨�������Ϊǰ�������֣�
 ǰ���Ϊ�����������Ϊż���������������ż��ǰ��˳�򱣳ֺ�����ǰһ�¡�
 ���磺L��Ԫ��ԭ������Ϊ��(1,2,7,8,3,5,0,9,10,12,13)���������L��Ԫ��˳���Ϊ(1,7,3,5,9,13,2,8,0,9,10,12)
 ��ע�⣺��ֹ����֤ʱʹ�����������ʾ
 */
void sort(Node* L) {
	//TODO:
	Node* jL = (Node*)malloc(sizeof(Node));
	Node* oL = (Node*)malloc(sizeof(Node));
	Node* p1 = L, * p2 = jL, * p3 = oL;
	int num = count(L);
	for (int i = 0; i < num; i++) {
		if ((p1->i) % 2 == 0 ) {
			p3 = p3->next = p1;
		}
		else {
			p2 = p2->next = p1;
		}
		p1 = p1->next;
	}
	p2->next = oL->next;
	p3->next = NULL;
	L = jL->next;
}

//�ͷ��ڴ�
void destory(Node* L) {
	Node* p, * q;
	if (L != NULL) {
		p = L->next;
		while (p != NULL) {
			q = p;
			p = p->next;
			free(q);
		}
		free(L);
	}
}
//��ӡ
void print(Node* L) {
	Node* m;
	m = L->next;
	printf("������˳��Ϊ��");
	while (m->next != NULL) {
		printf("%4d", m->i);
		m = m->next;
	}
	printf("%4d", m->i);
	printf("\n");
}
//��Ŀ����
void introduce() {
	printf("��֪���Ա���Ԫ�ؾ�Ϊ����������㷨�������Ϊǰ�������֣�ǰ���Ϊ�����������Ϊż������ʵ�����Ա��Ԫ�ط���\n");
}





//
////����27��
//#define ERROR 0
//#define OK 1
//#define TURE 1
//#define FAULE -1
//
//#define Max_size 100
//#define ElemType int
//
////�ṹ�嶨��
//typedef struct {
//	ElemType elem[Max_size];
//	ElemType last;
//} Seqlist;
//
////��������
//int menu_select();
//int Add_A_List(Seqlist*);
//int Del_A_List(Seqlist*);
//int Add_B_List(Seqlist*);
//int Del_B_List(Seqlist*);
//int Auto_Del_List(Seqlist*, Seqlist*);
//int printA(Seqlist*);
//int printB(Seqlist);
//
//// main()����
//int main() {
//	Seqlist ListA, ListB;
//	ListA.last = -1; //ע��Ӧ��ǰ��ֵ
//	ListB.last = -1;
//	for (;;) {
//		switch (menu_select()) {
//		case 1:
//			printf("�������Ա�A�е�Ԫ��\n");
//			Add_A_List(&ListA);
//			break;
//		case 2:
//			printf("ɾ�����Ա�A�е�Ԫ��\n");
//			Del_A_List(&ListA);
//			break;
//		case 3:
//			printf("�������Ա�B�е�Ԫ��\n");
//			Add_B_List(&ListB);
//			break;
//		case 4:
//			printf("ɾ�����Ա�B�е�Ԫ��\n");
//			Del_B_List(&ListB);
//			break;
//		case 5:
//			printf("������Զ�ɾ��A�д���B�е�Ԫ��\n");
//			Auto_Del_List(&ListA, &ListB);
//			break;
//		case 6:
//			printf("��ʾ��A�е�Ԫ��\n");
//			printA(&ListA);
//			break;
//		case 7:
//			printf("��ʾ��B�е�Ԫ��\n");
//			printB(ListB);
//			break;
//		case 0:
//			printf("��ӭ�´�ʹ��\n");
//			return 0;
//		}
//	}
//} // main()��������
//
////�˵���������
//int menu_select() {
//	int sn;
//	printf("===============================\n");
//	printf("1���������Ա�A�е�Ԫ��\n");
//	printf("2��ɾ�����Ա�A�е�Ԫ��\n");
//	printf("3���������Ա�B�е�Ԫ��\n");
//	printf("4��ɾ�����Ա�B�е�Ԫ��\n");
//	printf("5��������Զ�ɾ��A�д���B�е�Ԫ��\n");
//	printf("6����ʾ��A�е�Ԫ��\n");
//	printf("7����ʾ��B�е�Ԫ��\n");
//	printf("0���˳�����\n");
//	printf("=================================\n");
//	printf("����0--7\n");
//	for (;;) {
//		scanf("%d", &sn);
//		getchar();
//		if (sn < 0 || sn > 7)
//			printf("\n �����������ѡ�� 0--7S�� ");
//		else
//			break;
//	}
//	return sn;
//}
////�������Ա�A�е�Ԫ��
//int Add_A_List(Seqlist* ListA) {
//	char flag = 'Y';
//	while (flag == 'y' || flag == 'Y') {
//		if (ListA->last >= Max_size - 1) {
//			printf("���Ա�A�ռ�������\n\n");
//			return ERROR;
//		}
//		else
//			ListA->last++;
//		printf("��Ҫ���������Ϊ:\n");
//		scanf("%d", &ListA->elem[ListA->last]);
//		printf("\n");
//		printf("����������(y/n)");
//		getchar();
//		scanf("%c", &flag);
//		printf("\n");
//	}
//	return OK;
//}
////�������Ա�B�е�Ԫ��
//int Add_B_List(Seqlist* ListB) {
//	char flag = 'Y';
//	while (flag == 'y' || flag == 'Y') {
//		if (ListB->last >= Max_size - 1) {
//			printf("���Ա�B�ռ�������\n\n");
//			return ERROR;
//		}
//		else
//			ListB->last++;
//		printf("��Ҫ���������Ϊ:\n");
//		scanf("%d", &ListB->elem[ListB->last]);
//		printf("\n");
//		printf("����������(y/n)");
//		getchar();
//		scanf("%c", &flag);
//		printf("\n");
//	}
//	return OK;
//}
////ɾ�����Ա�A�е�Ԫ��
//int Del_A_List(Seqlist* ListA) {
//	int i = 0, n;
//	char flag = 'Y';
//	if (ListA->last == -1) {
//		printf("���Ա�Ϊ�գ�\n\n");
//		return FAULE;
//	}
//	else {
//		printf("��������Ҫɾ����Ԫ��\n");
//		scanf("%d", &n);
//		while (n != ListA->elem[i] && i <= ListA->last)
//			i++;
//		if (i <= ListA->last) {
//			printf("Ҫɾ��������Ϊ%d\n", ListA->elem[i]);
//			printf("��ȷ��Ҫɾ�����ͨѶ�ߵ���Ϣ��(y/n) ");
//			getchar();
//			scanf("%c", &flag);
//			if (flag == 'y' || flag == 'Y')
//				for (i = i + 1; i <= ListA->last; i++)
//					ListA->elem[i - 1] = ListA->elem[i];
//			ListA->last--;
//			return OK;
//		}
//		else {
//			printf("Ԫ�ز����ڣ�\n\n");
//			return FAULE;
//		}
//	}
//
//}
////ɾ�����Ա�B�е�Ԫ��
//int Del_B_List(Seqlist* ListB) {
//	int i=0, n;
//	char flag;
//	if (ListB->last == -1) {
//		printf("���Ա�Ϊ�գ�\n\n");
//		return FAULE;
//	}
//	else {
//		printf("��������Ҫɾ����Ԫ��\n");
//		scanf("%d", &n);
//		while (n != ListB->elem[i] && i <= ListB->last)
//			i++;
//		if (i <= ListB->last) {
//			printf("Ҫɾ��������Ϊ%d\n", ListB->elem[i]);
//			printf("��ȷ��Ҫɾ�����ͨѶ�ߵ���Ϣ��(y/n) ");
//			getchar();
//			scanf("%c", &flag);
//			if (flag == 'y' || flag == 'Y')
//				for (i = n + 1; i <= ListB->last; i++)
//					ListB->elem[i - 1] = ListB->elem[i];
//			ListB->last--;
//			return OK;
//		}
//		else {
//			printf("Ԫ�ز����ڣ�\n\n");
//			return FAULE;
//		}
//	}
//}
////������Զ�ɾ��A�д���B�е�Ԫ��
///*
//  TODO���Ա�B�е�ÿ��Ԫ�ؿ����Ƿ������Ա�A�У����ڣ������Ա�A�е�Ԫ��ɾ����
//  ��ע�⣺��ֹ����֤ʱʹ�����������ʾ
// */
//int Auto_Del_List(Seqlist* ListA, Seqlist* ListB) {
//	for (int i = 0; i <= ListB->last; i++) {
//		for (int j = 0; j <= ListA->last; j++) {
//			if (ListA->elem[j] == ListB->elem[i]) {
//				for (int x = j; x <= ListA->last - 1; x++) {
//					ListA->elem[x] = ListA->elem[x + 1];
//				}
//				ListA->last--;
//			}
//		}
//	}
//	return 1;
//
//}
////��ӡ
//int printA(Seqlist* ListA) {
//	int i;
//	if (ListA->last == -1) {
//		printf("���Ա�AΪ��\n");
//		return ERROR;
//	}
//	for (i = 0; i <= ListA->last; i++) {
//		printf("%4d", ListA->elem[i]);
//	}
//	printf("\n");
//	return OK;
//}
////��ӡ
//int printB(Seqlist ListB) {
//	int j;
//	if (ListB.last == -1) {
//		printf("���Ա�BΪ��\n");
//		return ERROR;
//	}
//	for (j = 0; j <= ListB.last; j++) {
//		printf("%4d", ListB.elem[j]);
//	}
//	printf("\n");
//	return OK;
//}
//


////����18��
//typedef int ElementType;
//typedef struct Node* PtrToNode;
//struct Node {
//	ElementType Data;
//	PtrToNode Next;
//};
//typedef PtrToNode List;
////ͳ�ƽڵ����
//int count(List L) {
//	int i = 0;
//	List p = L;
//	while (p->Next != NULL) {
//		i++;
//		p = p->Next;
//	}
//	i++;
//	return i;
//}
//
///*
// TODO���ϲ�������
//
// ���ܣ������Ա�A=��a1,a2,����am��,B=��b1,b2,����bn��,�Ա�дһ�������й���ϲ�A��BΪ���Ա�C���㷨��ʹ��
// C=��a1,b1,a2,b2,����am,bm,bm+1,����bn����C=��a1,b1,a2,b2,����an,bn,an+1,����am��
// ���Ա�C���Ե�����Ϊ�洢�ṹ��C������A��B��Ľڵ�ռ乹�ɡ�����ĳ��Ⱦ�Ϊ��ʾ�洢��
// �磺A=��1,2,3����B=��6,5,4,3,2,1�����ϲ���C=��1,6,2,5,3,4,3,2,1��
// �磺A=��6,5,4,3,2,1����B=��1,2,3�����ϲ���C=��6,1,5,2,4,3,3,2,1��
// �ϲ���ɺ󣬲���Ҫlistmerge�����������ӡ���������л���ô�ӡ����
//
// ������List L1,List L2 ������Ҫ�ϲ�������������
// ����ֵ��List����ϲ������ɵ��µĵ�����
// */
//List listmerge(List L1, List L2) {
//	int m = count(L1), n = count(L2);
//	List head = (List)malloc(sizeof(Node));
//	List p1 = L1, p2 = L2, p3 = head;
//	
//	
//	if (m <= n) {
//		for (int i = 0; i < m; i++) {
//			p3 = p3->Next = p1;
//			p1 = p1->Next;
//			p3 = p3->Next = p2;
//			p2 = p2->Next;
//		}
//	}
//	else {
//		for (int i = 0; i < n; i++) {
//			p3 = p3->Next = p1;
//			p1 = p1->Next;
//			p3 = p3->Next = p2;
//			p2 = p2->Next;
//		}
//		p3->Next = p1;
//		
//	}
//	return head->Next;
//} 

/*
 TODO������������

 ���ܣ��������������뺯��������ͨ��printf("����������ĳ��ȣ�\n");��䣬��ӡ��ʾ����
 ����ĳ��ȣ�ͨ��scanf( "%d",&len );�Ӽ��̻�ȡ���ȡ�
 �������Ϊ0���򷵻�NULL��
 ����ͨ��printf("�����������Ԫ�أ�\n")�����ʾ�����Ԫ�ء������ݳ���ֵ��
 ѭ��ִ��scanf( "%d",&num );��ȡԪ��ֵ������Ԫ��ֵ���뵽�������С�������ɵ���������
 �����ش����ĵ�����

 ��������
 ����ֵ��List�Ǵ����ĵ�����
// */
//List listcreat() {
//	int len = 0;
//	printf("����������ĳ��ȣ�\n");
//	scanf("%d", &len);
//	if (len == 0) {
//		return NULL;
//	}
//	List head = NULL,  q = NULL,  p = NULL;
//	printf("�����������Ԫ�أ�\n");
//	for (int i = 1; i <= len; i++) {
//		p = (Node*)malloc(sizeof(Node));
//		scanf("%d", &p->Data);
//		if (i == 1) {
//			head = p;
//		}
//		else {
//			q->Next = p;
//		}
//		q = p;
//	}
//	p->Next = NULL;
//	return head;
//}
//
///*
// TODO�����������
//
// ���ܣ����������������Ԫ�أ�ÿ��Ԫ���Կո�������������ʽΪ��
// printf("%d ",data)��������Ԫ�ض������Ϻ�ͨ��putchar('\n')���л��С�
// ע:���뺯�������ȼ��L->Next�Ƿ�ΪNULL�����ΪNULL�������printf("NULL\n");�����̷��ء�
//
// ������List L����Ҫ����������
// ����ֵ����
// */
//void listprint(List L) {
//	if (L == NULL) {
//		printf("NULL\n");
//		return;
//	}
//	int len = count(L);
//	List p = L;
//	for (int i = 0; i < len; i++) {
//		printf("%d ", p->Data);
//		p = p->Next;
//	}
//	putchar('\n');
//}
//
//int main() {
//	List L1, L2, L;
//	L1 = listcreat();
//	L2 = listcreat();
//	L = listmerge(L1, L2);
//	printf("�ϲ��������Ϊ��\n");
//	listprint(L);
//	return 0;
//}





//һ��10��

////����ϵͳͷ�ļ�
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
////���õĺ궨����ų���
//#define ERROR 0
//#define OK 1
//#define FALSE 0
//#define TRUE 1
//#define MAXSIZE 100
//int resultArray[MAXSIZE];
//typedef struct {
//	int data[MAXSIZE];
//	int length;
//} Seqlist;
//int menu_select() // �˵���������
//{
//	int sn; // sn���ڽ��ղ˵�ѡ��
//
//	printf("\n��������������˵���\n");
//
//	printf("\n   *** ˳���ϲ�ϵͳ ***\n"); // ��ʾ�˵�
//	printf("==============================\n");
//	printf("   1������A˳���\n");
//	printf("   2������B˳���\n");
//	printf("   3���ϲ��������˳���\n");
//	printf("   0���˳�\n");
//	printf("==============================\n");
//	printf("  ��ѡ��0--3:  ");
//
//	for (;;) // �˵�����ѡ��
//	{
//		scanf("%d", &sn);
//		getchar();
//		if (sn < 0 || sn > 3) // �жϲ˵�ѡ���Ƿ����ں���Χ��0--3
//			printf("\n\t ����ѡ�����������ѡ�� 0--3�� ");
//		else
//			break;
//	}
//	return sn;
//}
//
//void SetA(Seqlist* A) {
//	int a, i;
//	A->length = 0;
//	printf("������Ҫ������Ԫ�صĸ���:");
//	scanf("%d", &a);
//	for (i = 0; i < a; i++) {
//		printf("�������%d��Ԫ��", i + 1);
//		scanf("%d", &A->data[i]);
//		A->length++;
//	}
//
//}
//
//void SetB(Seqlist* B) {
//	int a, i;
//	B->length = 0;
//	printf("������Ҫ������Ԫ�صĸ���:");
//	scanf("%d", &a);
//	for (i = 0; i < a; i++) {
//		printf("�������%d��Ԫ��", i + 1);
//		scanf("%d", &B->data[i]);
//		B->length++;
//	}
//}
//void reverse(Seqlist* B) {
//	int left = 0, right = B->length - 1;
//	while (left < right) {
//		int t = B->data[right];
//		B->data[right] = B->data[left];
//		B->data[left] = t;
//		left++;
//		right--;
//	}
//}
//void merge(Seqlist* A, Seqlist* B) {
//	//�Ȱ�B����
//	reverse(B);
//	int i = 0, j = 0, x = 0;;
//	while (i < A->length && j < B->length) {
//		if (A->data[i] < B->data[j]) {
//			resultArray[x++] = A->data[i++];
//		}
//		else {
//			resultArray[x++] = B->data[j++];
//		}
//	}
//	while (i < A->length) {
//		resultArray[x++] = A->data[i++];
//	}
//	while (j < B->length) {
//		resultArray[x++] = B->data[j++];
//	}
//	for (int m = 0; m < A->length + B->length; m++) {
//		A->data[m] = resultArray[m];
//	}
//	A->length = A->length + B->length;
//}
//
//void main() {
//	Seqlist A;
//	Seqlist B;
//
//	for (;;) // �˵�������������ѭ���˵�����ѡ���������Ӧ���ܺ���,ֱ��ѡ��0 �˳�
//	{
//		switch (menu_select()) // ���ò˵�������������ֵѡ���ܺ���
//		{
//		case 1:
//			printf(" ����A��\n");
//			SetA(&A);
//			break;
//		case 2:
//			printf(" ����B��\n");
//			SetB(&B);
//			break;
//		case 3:
//			printf(" �ϲ�A��B��\n");
//			merge(&A, &B);
//			printf("�ϲ����A˳�������\n");
//			for (int i = 0; i < A.length; i++) {
//				printf("%d", A.data[i]);
//				printf("\n");
//			}
//
//			break;
//		case 0:
//			printf(" �ټ���\n"); // �˳�ϵͳ
//			return;
//		} // switch������
//	} // forѭ������
//} // main()��������
