#pragma once
//用来声明函数
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h> // time 函数
#include<stdlib.h>// rand 函数

// 行
#define ROW 3 
// 列
#define COL 3

void menu();

void game();

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家移动
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑移动
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢
char Iswin(char board[ROW][COL], int row, int col);