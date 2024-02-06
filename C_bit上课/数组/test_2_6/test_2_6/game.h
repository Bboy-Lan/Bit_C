#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

//������������
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�˵�����
void menu();

//��Ϸ����
void game();

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//����ƶ�
void PlayerMove(char board[ROW][COL], int row, int col);

//�����ƶ�
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col);

//�ж������Ƿ��Ѿ�������
int IsFull(char board[ROW][COL], int row, int col);