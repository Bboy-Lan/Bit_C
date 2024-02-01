#pragma once

#include"game.h"

//�����Ϸʵ�ֺ���

void menu()
{
	printf("################\n");
	printf("#### 1.PLAY ####\n");
	printf("#### 0.EXIT ####\n");
	printf("################\n");
}

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)//Ϊɶ��Ҫ����ȥ�к��� ��
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//��ֵ�ո�
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	////������ӡ������Ч��
	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < col; j++)
	//	{
	//		printf("%c ", board[i][j]);
	//	}
	//	printf("\n");
	//}

	////�� һ�����ݺ�һ�зָ��п���һ��  �ȴ�ӡ���� ���ӡ�ָ���  ���һ��ֻ��ӡ���� ����ӡ�ָ��м���
	////     1| 2 | 3
	////     -| - | -
	////     1| 2 | 3
	////     -| - | -
	////     1| 2 | 3

	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//	//��ӡ����
	//	printf(" %c | %c | %c \n", board[i][0], board[i][1],board[i][2]);//����̫���� һ�����иı�͵�����
	//	//��ӡ�ָ���
	//	if(i < row - 1)//���һ�в���ӡ�ָ���
	//		printf("---|---|---\n");
	//}

	//������ӡ�͸��������
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)//���һ�в���ӡ�ָ���
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

//����ƶ�
void PlayerMove(char board[ROW][COL], int row, int col)
{
	//����ƶ�
	printf("-----------------------------\n");

	printf("-----------����ƶ�-----------\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����������λ��:>");
		scanf("%d%d", &x, &y);//�����������
		//�ж�������Ƿ��Ѿ���ʹ�ù�
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�� ��  x y ֱ������
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;//����һ�ξͽ��� �ȴ���������
			}
			else
			{
				printf("�����Ѿ���ʹ��\n");
			}
		}
		else
		{
			printf("���ںϷ����귶Χ\n");
		}
	}

}


//�����ƶ�
void ComputerMove(char board[ROW][COL], int row, int col)
{
	//�����ƶ�
	int x = 0;
	int y = 0;
	//���Ե������������  srand ����
	printf("-----------------------------\n");

	printf("-----------�����ƶ�-----------\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}

char IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


//�ж���Ӯ  Ӧ��������״̬ --->  Ӯ�� * ����# ƽ�� Q ������Ϸ C
char Iswin(char board[ROW][COL], int row, int col)
{
	//1.�ж���Ӯ  �������� ���Խ���
	//��
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//������Ȳ�������һ����Ϊ�ո�
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];//����������� ˭Ӯ�˾ͷ���˭ ����̫�����ӵĿ���
		}
	}
	//��
	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[0][j];//����������� ˭Ӯ�˾ͷ���˭ ����̫�����ӵĿ���
		}
		//�����Խ���
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			return board[0][0];
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			return board[1][1];
		//2.�ж�ƽ�� 
		if (IsFull(board, row, col))
		{
			return 'Q';
		}
	}
	return 'C';
}
