#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//二星12题
#include <string.h>

#define ERROR 0
#define OK 1
#define TURE 1
#define FAULE -1

//结构体定义
typedef struct Node {
	int i;
	struct Node* next;
} Node;

//函数声明
int menu_select(int);
void introduce();
void createnode(Node*);
void sort(Node*);
void destory(Node*);
void print(Node*);

// main()函数
int main() {
	Node* head = NULL;
	int cnt = 0;
	for (;;)	 // 无限循环,选择0 退出
	{
		switch (menu_select(cnt))	 // 调用菜单函数，按返回值选择功能函数
		{
		case 1:
			introduce();
			break;
		case 2:
			printf("请输入数据(结束标志#):");
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
			printf(" 再见！\n");				//退出系统
			destory(head);
			return 0;
		}
	}
} // main()函数结束

//菜单驱动程序
int menu_select(int cnt) {
	int sn;
	printf("      链表的元素分类\n");		//显示菜单
	printf("==============================\n");
	printf("   1、题目介绍\n");
	printf("   2、创建链表\n");
	printf("   3、分类排序并输出结果\n");
	printf("   0、退出\n");
	printf("==============================\n");
	printf("  请选择0--3:  ");

	for (;;)		//菜单功能选择
	{
		scanf("%d", &sn);
		if (sn < 0 || sn > 3)
			printf("\n 输入选择错误，请重新选择 0--3： ");
		else if ((cnt == 0 && sn == 3))		//必须按次序进行
		{
			printf("\n  ->请先创建链表<-  \n");
			printf("   请选择第2项创建链表：");
			continue;
		}
		else
			break;
	}
	return sn;
}
//尾插法建表
void createnode(Node* L) {
	Node* p, * q;
	int flag = 1, c;
	p = L;
	while (flag) {
		scanf("%d", &c);
		if (getchar() != '#')	// 输入#结束
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
//计算节点个数
int count(Node* L) {
	Node* p = L;
	int i = 0;
	while (p->next != NULL) {
		i++;
	}
	return ++i;
}
/*
 TODO:已知线性表中元素均为整数，设计算法将其调整为前后两部分，
 前面均为奇数，后面均为偶数。排序后，奇数和偶数前后顺序保持和排序前一致。
 比如：L中元素原来依次为：(1,2,7,8,3,5,0,9,10,12,13)，则排序后，L中元素顺序变为(1,7,3,5,9,13,2,8,0,9,10,12)
 ！注意：禁止在验证时使用输出函数显示
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

//释放内存
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
//打印
void print(Node* L) {
	Node* m;
	m = L->next;
	printf("分类后的顺序为：");
	while (m->next != NULL) {
		printf("%4d", m->i);
		m = m->next;
	}
	printf("%4d", m->i);
	printf("\n");
}
//题目介绍
void introduce() {
	printf("已知线性表中元素均为整数，设计算法将其调整为前后两部分，前面均为奇数，后面均为偶数。即实现线性表的元素分类\n");
}





//
////三星27题
//#define ERROR 0
//#define OK 1
//#define TURE 1
//#define FAULE -1
//
//#define Max_size 100
//#define ElemType int
//
////结构体定义
//typedef struct {
//	ElemType elem[Max_size];
//	ElemType last;
//} Seqlist;
//
////函数声明
//int menu_select();
//int Add_A_List(Seqlist*);
//int Del_A_List(Seqlist*);
//int Add_B_List(Seqlist*);
//int Del_B_List(Seqlist*);
//int Auto_Del_List(Seqlist*, Seqlist*);
//int printA(Seqlist*);
//int printB(Seqlist);
//
//// main()函数
//int main() {
//	Seqlist ListA, ListB;
//	ListA.last = -1; //注意应提前赋值
//	ListB.last = -1;
//	for (;;) {
//		switch (menu_select()) {
//		case 1:
//			printf("增加线性表A中的元素\n");
//			Add_A_List(&ListA);
//			break;
//		case 2:
//			printf("删除线性表A中的元素\n");
//			Del_A_List(&ListA);
//			break;
//		case 3:
//			printf("增加线性表B中的元素\n");
//			Add_B_List(&ListB);
//			break;
//		case 4:
//			printf("删除线性表B中的元素\n");
//			Del_B_List(&ListB);
//			break;
//		case 5:
//			printf("计算机自动删除A中存在B中的元素\n");
//			Auto_Del_List(&ListA, &ListB);
//			break;
//		case 6:
//			printf("显示出A中的元素\n");
//			printA(&ListA);
//			break;
//		case 7:
//			printf("显示出B中的元素\n");
//			printB(ListB);
//			break;
//		case 0:
//			printf("欢迎下次使用\n");
//			return 0;
//		}
//	}
//} // main()函数结束
//
////菜单驱动程序
//int menu_select() {
//	int sn;
//	printf("===============================\n");
//	printf("1、增加线性表A中的元素\n");
//	printf("2、删除线性表A中的元素\n");
//	printf("3、增加线性表B中的元素\n");
//	printf("4、删除线性表B中的元素\n");
//	printf("5、计算机自动删除A中存在B中的元素\n");
//	printf("6、显示出A中的元素\n");
//	printf("7、显示出B中的元素\n");
//	printf("0、退出程序\n");
//	printf("=================================\n");
//	printf("输入0--7\n");
//	for (;;) {
//		scanf("%d", &sn);
//		getchar();
//		if (sn < 0 || sn > 7)
//			printf("\n 输入错误，重新选择 0--7S： ");
//		else
//			break;
//	}
//	return sn;
//}
////增加线性表A中的元素
//int Add_A_List(Seqlist* ListA) {
//	char flag = 'Y';
//	while (flag == 'y' || flag == 'Y') {
//		if (ListA->last >= Max_size - 1) {
//			printf("线性表A空间已满！\n\n");
//			return ERROR;
//		}
//		else
//			ListA->last++;
//		printf("需要加入的数字为:\n");
//		scanf("%d", &ListA->elem[ListA->last]);
//		printf("\n");
//		printf("继续输入吗？(y/n)");
//		getchar();
//		scanf("%c", &flag);
//		printf("\n");
//	}
//	return OK;
//}
////增加线性表B中的元素
//int Add_B_List(Seqlist* ListB) {
//	char flag = 'Y';
//	while (flag == 'y' || flag == 'Y') {
//		if (ListB->last >= Max_size - 1) {
//			printf("线性表B空间已满！\n\n");
//			return ERROR;
//		}
//		else
//			ListB->last++;
//		printf("需要加入的数字为:\n");
//		scanf("%d", &ListB->elem[ListB->last]);
//		printf("\n");
//		printf("继续输入吗？(y/n)");
//		getchar();
//		scanf("%c", &flag);
//		printf("\n");
//	}
//	return OK;
//}
////删除线性表A中的元素
//int Del_A_List(Seqlist* ListA) {
//	int i = 0, n;
//	char flag = 'Y';
//	if (ListA->last == -1) {
//		printf("线性表为空！\n\n");
//		return FAULE;
//	}
//	else {
//		printf("请输入你要删除的元素\n");
//		scanf("%d", &n);
//		while (n != ListA->elem[i] && i <= ListA->last)
//			i++;
//		if (i <= ListA->last) {
//			printf("要删除的数字为%d\n", ListA->elem[i]);
//			printf("你确定要删除这个通讯者的信息吗？(y/n) ");
//			getchar();
//			scanf("%c", &flag);
//			if (flag == 'y' || flag == 'Y')
//				for (i = i + 1; i <= ListA->last; i++)
//					ListA->elem[i - 1] = ListA->elem[i];
//			ListA->last--;
//			return OK;
//		}
//		else {
//			printf("元素不存在！\n\n");
//			return FAULE;
//		}
//	}
//
//}
////删除线性表B中的元素
//int Del_B_List(Seqlist* ListB) {
//	int i=0, n;
//	char flag;
//	if (ListB->last == -1) {
//		printf("线性表为空！\n\n");
//		return FAULE;
//	}
//	else {
//		printf("请输入你要删除的元素\n");
//		scanf("%d", &n);
//		while (n != ListB->elem[i] && i <= ListB->last)
//			i++;
//		if (i <= ListB->last) {
//			printf("要删除的数字为%d\n", ListB->elem[i]);
//			printf("你确定要删除这个通讯者的信息吗？(y/n) ");
//			getchar();
//			scanf("%c", &flag);
//			if (flag == 'y' || flag == 'Y')
//				for (i = n + 1; i <= ListB->last; i++)
//					ListB->elem[i - 1] = ListB->elem[i];
//			ListB->last--;
//			return OK;
//		}
//		else {
//			printf("元素不存在！\n\n");
//			return FAULE;
//		}
//	}
//}
////计算机自动删除A中存在B中的元素
///*
//  TODO：性表B中的每个元素看它是否在线性表A中，若在，则将线性表A中的元素删除。
//  ！注意：禁止在验证时使用输出函数显示
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
////打印
//int printA(Seqlist* ListA) {
//	int i;
//	if (ListA->last == -1) {
//		printf("线性表A为空\n");
//		return ERROR;
//	}
//	for (i = 0; i <= ListA->last; i++) {
//		printf("%4d", ListA->elem[i]);
//	}
//	printf("\n");
//	return OK;
//}
////打印
//int printB(Seqlist ListB) {
//	int j;
//	if (ListB.last == -1) {
//		printf("线性表B为空\n");
//		return ERROR;
//	}
//	for (j = 0; j <= ListB.last; j++) {
//		printf("%4d", ListB.elem[j]);
//	}
//	printf("\n");
//	return OK;
//}
//


////二星18题
//typedef int ElementType;
//typedef struct Node* PtrToNode;
//struct Node {
//	ElementType Data;
//	PtrToNode Next;
//};
//typedef PtrToNode List;
////统计节点个数
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
// TODO：合并单链表
//
// 功能：设线性表A=（a1,a2,…，am）,B=（b1,b2,…，bn）,试编写一个按下列规则合并A，B为线性表C的算法，使得
// C=（a1,b1,a2,b2,…，am,bm,bm+1,…，bn）或C=（a1,b1,a2,b2,…，an,bn,an+1,…，am）
// 线性表C均以单链表为存储结构，C表利用A，B表的节点空间构成。链表的长度均为显示存储。
// 如：A=（1,2,3），B=（6,5,4,3,2,1），合并后C=（1,6,2,5,3,4,3,2,1）
// 如：A=（6,5,4,3,2,1），B=（1,2,3），合并后C=（6,1,5,2,4,3,3,2,1）
// 合并完成后，不需要listmerge（）方法里打印，主函数中会调用打印函数
//
// 参数：List L1,List L2 代表需要合并的两个单链表
// 返回值：List代表合并完生成的新的单链表
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
 TODO：创建单链表

 功能：创建单链表，进入函数，首先通过printf("请输入链表的长度：\n");语句，打印提示输入
 链表的长度，通过scanf( "%d",&len );从键盘获取长度。
 如果长度为0，则返回NULL。
 否则，通过printf("请输入链表的元素：\n")语句提示输入的元素。并根据长度值，
 循环执行scanf( "%d",&num );获取元素值，并将元素值加入到单链表中。最终完成单链表创建，
 并返回创建的单链表。

 参数：无
 返回值：List是创建的单链表
// */
//List listcreat() {
//	int len = 0;
//	printf("请输入链表的长度：\n");
//	scanf("%d", &len);
//	if (len == 0) {
//		return NULL;
//	}
//	List head = NULL,  q = NULL,  p = NULL;
//	printf("请输入链表的元素：\n");
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
// TODO：输出单链表
//
// 功能：输出单链表中所有元素，每个元素以空格隔开，输出语句格式为：
// printf("%d ",data)，当所有元素都输出完毕后，通过putchar('\n')进行换行。
// 注:进入函数，首先检查L->Next是否为NULL。如果为NULL，则调用printf("NULL\n");并立刻返回。
//
// 参数：List L是需要操作的链表
// 返回值：无
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
//	printf("合并后的链表为：\n");
//	listprint(L);
//	return 0;
//}





//一星10题

////常用系统头文件
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
////常用的宏定义符号常量
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
//int menu_select() // 菜单驱动程序
//{
//	int sn; // sn用于接收菜单选项
//
//	printf("\n按任意键进入主菜单！\n");
//
//	printf("\n   *** 顺序表合并系统 ***\n"); // 显示菜单
//	printf("==============================\n");
//	printf("   1、创建A顺序表\n");
//	printf("   2、创建B顺序表\n");
//	printf("   3、合并并输出该顺序表\n");
//	printf("   0、退出\n");
//	printf("==============================\n");
//	printf("  请选择0--3:  ");
//
//	for (;;) // 菜单功能选择
//	{
//		scanf("%d", &sn);
//		getchar();
//		if (sn < 0 || sn > 3) // 判断菜单选项是否属于合理范围：0--3
//			printf("\n\t 输入选择错误，请重新选择 0--3： ");
//		else
//			break;
//	}
//	return sn;
//}
//
//void SetA(Seqlist* A) {
//	int a, i;
//	A->length = 0;
//	printf("请输入要创建的元素的个数:");
//	scanf("%d", &a);
//	for (i = 0; i < a; i++) {
//		printf("请输入第%d个元素", i + 1);
//		scanf("%d", &A->data[i]);
//		A->length++;
//	}
//
//}
//
//void SetB(Seqlist* B) {
//	int a, i;
//	B->length = 0;
//	printf("请输入要创建的元素的个数:");
//	scanf("%d", &a);
//	for (i = 0; i < a; i++) {
//		printf("请输入第%d个元素", i + 1);
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
//	//先把B逆序
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
//	for (;;) // 菜单驱动程序：无限循环菜单功能选择与调用相应功能函数,直到选择0 退出
//	{
//		switch (menu_select()) // 调用菜单函数，按返回值选择功能函数
//		{
//		case 1:
//			printf(" 创建A表\n");
//			SetA(&A);
//			break;
//		case 2:
//			printf(" 创建B表\n");
//			SetB(&B);
//			break;
//		case 3:
//			printf(" 合并A、B表\n");
//			merge(&A, &B);
//			printf("合并后的A顺序表如下\n");
//			for (int i = 0; i < A.length; i++) {
//				printf("%d", A.data[i]);
//				printf("\n");
//			}
//
//			break;
//		case 0:
//			printf(" 再见！\n"); // 退出系统
//			return;
//		} // switch语句结束
//	} // for循环结束
//} // main()函数结束
