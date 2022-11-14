#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3



void initBoard(char chessMen[ROW][COL], int row,int col);//初始化棋盘

void printBoard(char chessMen[ROW][COL], int row, int col);//打印棋盘

void playerMove(char chessMen[ROW][COL], int row, int col);//玩家下棋

void compMove(char chessMen[ROW][COL], int row, int col);//电脑下棋

char isWin(char chessMen[ROW][COL], int row, int col);//判断输赢

