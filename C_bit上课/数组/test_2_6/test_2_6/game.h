#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

//定义棋盘行列
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//菜单函数
void menu();

//游戏函数
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
char IsWin(char board[ROW][COL], int row, int col);

//判断棋盘是否已经下满棋
int IsFull(char board[ROW][COL], int row, int col);