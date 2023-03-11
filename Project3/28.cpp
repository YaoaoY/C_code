
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define ERROR 0
#define OK 1
#define TURE 1
#define FAULE -1

#define Max_size 100
#define ElemType int

//结构体定义
typedef struct {
	ElemType elem[Max_size];
	ElemType last;
} Seqlist;

//函数声明
int menu_select();
int Add_A_List(Seqlist*);
int Del_A_List(Seqlist*);
int Add_B_List(Seqlist*);
int Del_B_List(Seqlist*);
int Auto_Del_List(Seqlist*, Seqlist*);
int printA(Seqlist*);
int printB(Seqlist);

// main()函数
int main() {
	Seqlist ListA, ListB;
	ListA.last = -1; //注意应提前赋值
	ListB.last = -1;
	for (;;) {
		switch (menu_select()) {
		case 1:
			printf("增加线性表A中的元素\n");
			Add_A_List(&ListA);
			break;
		case 2:
			printf("删除线性表A中的元素\n");
			Del_A_List(&ListA);
			break;
		case 3:
			printf("增加线性表B中的元素\n");
			Add_B_List(&ListB);
			break;
		case 4:
			printf("删除线性表B中的元素\n");
			Del_B_List(&ListB);
			break;
		case 5:
			printf("计算机自动删除A中存在B中的元素\n");
			Auto_Del_List(&ListA, &ListB);
			break;
		case 6:
			printf("显示出A中的元素\n");
			printA(&ListA);
			break;
		case 7:
			printf("显示出B中的元素\n");
			printB(ListB);
			break;
		case 0:
			printf("欢迎下次使用\n");
			return 0;
		}
	}
} // main()函数结束

//菜单驱动程序
int menu_select() {
	int sn;
	printf("===============================\n");
	printf("1、增加线性表A中的元素\n");
	printf("2、删除线性表A中的元素\n");
	printf("3、增加线性表B中的元素\n");
	printf("4、删除线性表B中的元素\n");
	printf("5、计算机自动删除A中存在B中的元素\n");
	printf("6、显示出A中的元素\n");
	printf("7、显示出B中的元素\n");
	printf("0、退出程序\n");
	printf("=================================\n");
	printf("输入0--7\n");
	for (;;) {
		scanf("%d", &sn);
		getchar();
		if (sn < 0 || sn > 7)
			printf("\n 输入错误，重新选择 0--7S： ");
		else
			break;
	}
	return sn;
}
//增加线性表A中的元素
int Add_A_List(Seqlist* ListA) {
	char flag = 'Y';
	while (flag == 'y' || flag == 'Y') {
		if (ListA->last >= Max_size - 1) {
			printf("线性表A空间已满！\n\n");
			return ERROR;
		}
		else
			ListA->last++;
		printf("需要加入的数字为:\n");
		scanf("%d", &ListA->elem[ListA->last]);
		printf("\n");
		printf("继续输入吗？(y/n)");
		getchar();
		scanf("%c", &flag);
		printf("\n");
	}
	return OK;
}
//增加线性表B中的元素
int Add_B_List(Seqlist* ListB) {
	char flag = 'Y';
	while (flag == 'y' || flag == 'Y') {
		if (ListB->last >= Max_size - 1) {
			printf("线性表B空间已满！\n\n");
			return ERROR;
		}
		else
			ListB->last++;
		printf("需要加入的数字为:\n");
		scanf("%d", &ListB->elem[ListB->last]);
		printf("\n");
		printf("继续输入吗？(y/n)");
		getchar();
		scanf("%c", &flag);
		printf("\n");
	}
	return OK;
}
//删除线性表A中的元素
int Del_A_List(Seqlist* ListA) {
	int i = 0, n;
	char flag = 'Y';
	if (ListA->last == -1) {
		printf("线性表为空！\n\n");
		return FAULE;
	}
	else {
		printf("请输入你要删除的元素\n");
		scanf("%d", &n);
		while (n != ListA->elem[i] && i <= ListA->last)
			i++;
		if (i <= ListA->last) {
			printf("要删除的数字为%d\n", ListA->elem[i]);
			printf("你确定要删除这个通讯者的信息吗？(y/n) ");
			getchar();
			scanf("%c", &flag);
			if (flag == 'y' || flag == 'Y')
				for (i = i + 1; i <= ListA->last; i++)
					ListA->elem[i - 1] = ListA->elem[i];
			ListA->last--;
			return OK;
		}
		else {
			printf("元素不存在！\n\n");
			return FAULE;
		}
	}

}
//删除线性表B中的元素
int Del_B_List(Seqlist* ListB) {
	int  i = 0, n=0;
	char flag;
	if (ListB->last == -1) {
		printf("线性表为空！\n\n");
		return FAULE;
	}
	else {
		printf("请输入你要删除的元素\n");
		scanf("%d", &n);
		while (n != ListB->elem[i] && i <= ListB->last)
			i++;
		if (i <= ListB->last) {
			printf("要删除的数字为%d\n", ListB->elem[i]);
			printf("你确定要删除这个通讯者的信息吗？(y/n) ");
			getchar();
			scanf("%c", &flag);
			if (flag == 'y' || flag == 'Y')
				for (i = n + 1; i <= ListB->last; i++)
					ListB->elem[i - 1] = ListB->elem[i];
			ListB->last--;
			return OK;
		}
		else {
			printf("元素不存在！\n\n");
			return FAULE;
		}
	}
}
//计算机自动删除A中存在B中的元素
/*
  TODO：性表B中的每个元素看它是否在线性表A中，若在，则将线性表A中的元素删除。
  ！注意：禁止在验证时使用输出函数显示
 */
int Auto_Del_List(Seqlist* ListA, Seqlist* ListB) {
	//TODO：
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
//打印
int printA(Seqlist* ListA) {
	int i;
	if (ListA->last == -1) {
		printf("线性表A为空\n");
		return ERROR;
	}
	for (i = 0; i <= ListA->last; i++) {
		printf("%4d", ListA->elem[i]);
	}
	printf("\n");
	return OK;
}
//打印
int printB(Seqlist ListB) {
	int j;
	if (ListB.last == -1) {
		printf("线性表B为空\n");
		return ERROR;
	}
	for (j = 0; j <= ListB.last; j++) {
		printf("%4d", ListB.elem[j]);
	}
	printf("\n");
	return OK;
}
