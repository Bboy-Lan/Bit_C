#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//定义有多少个炸弹
#define EASY_COUNT 10 

//菜单函数
void menu();

//初始化函数
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret);
//打印函数
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布置炸弹
void SetMine(char board[ROWS][COLS], int row, int col);
//返回周围 8 个格子范围内的 炸弹数量  
int GetMine(char board[ROWS][COLS], int row, int col);
//排除炸弹
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
