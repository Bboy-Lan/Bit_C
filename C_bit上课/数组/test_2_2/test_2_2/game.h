#pragma once

//放相关函数申明

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 3
#define COL 3

//菜单
void menu();

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家移动
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑移动
void ComputerMove(char board[ROW][COL], int row, int col);

//判断胜负
char IsWin(char board[ROW][COL], int row, int col);

//判断棋盘有没有放满
char IsFull(char board[ROW][COL], int row, int col);


