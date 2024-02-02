#pragma once

//����غ�������

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 3
#define COL 3

//�˵�
void menu();

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//����ƶ�
void PlayerMove(char board[ROW][COL], int row, int col);

//�����ƶ�
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж�ʤ��
char IsWin(char board[ROW][COL], int row, int col);

//�ж�������û�з���
char IsFull(char board[ROW][COL], int row, int col);


