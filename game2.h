#include<stdlib.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 11//��ֹ�Ų��׵�ʱ������Խ�磬�����ص�ÿ�������ñ�չ�ֳ��������̵��к��ж�����1
#define COL 11
#define ROW2 (ROW-2)
#define COL2 (COL-2)
#define NUM 10

void init(char arr[ROW][COL], int row, int col, char c);//��ʼ������

void print(char arr[ROW][COL], int row, int col);

void setMine(char mine[ROW][COL], int row, int col);

void findMine(char mine[ROW][COL], char show[ROW][COL],int row, int col);
