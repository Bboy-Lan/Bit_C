#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
//��Ϊ��Ҫ������Χ8��Ԫ�� ������Ҫ������һȦ����
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10//�����Ѷ� ը������ 10 ��

//��ӡ�˵�
void menu();

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//����ը��
void SetMine(char board[ROWS][COLS], int row, int col);

//̽����Χ�Ƿ���ը��  һ���÷���ʲôʱ���ø���һ�������
char GetMine(char mine[ROWS][COLS], int x, int y);

//�Ų�ը��
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col);
