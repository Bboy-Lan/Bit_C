#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
//因为需要遍历周围8个元素 所以需要再扩大一圈棋盘
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10//简易难度 炸弹数量 10 个

//打印菜单
void menu();

//初始化函数
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret);

//打印函数
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置炸弹
void SetMine(char board[ROWS][COLS], int row, int col);

//探查周围是否有炸弹  一定得分清什么时候用更大一格的数组
char GetMine(char mine[ROWS][COLS], int x, int y);

//排查炸弹
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col);
