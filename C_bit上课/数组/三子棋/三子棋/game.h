#pragma once
//������������
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h> // time ����
#include<stdlib.h>// rand ����

// ��
#define ROW 3 
// ��
#define COL 3

void menu();

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
char Iswin(char board[ROW][COL], int row, int col);