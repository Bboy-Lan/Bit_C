#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�����ж��ٸ�ը��
#define EASY_COUNT 10 

//�˵�����
void menu();

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//����ը��
void SetMine(char board[ROWS][COLS], int row, int col);
//������Χ 8 �����ӷ�Χ�ڵ� ը������  
int GetMine(char board[ROWS][COLS], int row, int col);
//�ų�ը��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
