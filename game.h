#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3



void initBoard(char chessMen[ROW][COL], int row,int col);//��ʼ������

void printBoard(char chessMen[ROW][COL], int row, int col);//��ӡ����

void playerMove(char chessMen[ROW][COL], int row, int col);//�������

void compMove(char chessMen[ROW][COL], int row, int col);//��������

char isWin(char chessMen[ROW][COL], int row, int col);//�ж���Ӯ

