#include"game.h"

//�˵�����
void menu()
{
	printf("\n");
	printf("------ɨ����Ϸ-----\n");
	printf("\n");
	printf("####################\n");
	printf("###### 1.PLAY ######\n");
	printf("###### 0.EXIT ######\n");
	printf("####################\n");
	printf("\n");
	printf("------ɨ����Ϸ-----\n");
	printf("\n");
}

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols,char ret)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 0; i <= row; i++)//��ӡ�����б�
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//�����±��1��ʼ  ��Ϊ��ӡ��������9*9�Ĳ���
	{
		int j = 0;
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}

//����ը��
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		//��������� �������Ҫ + 1�� ˼��һ��Ϊʲô��
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x][y] == '0')
			{
				board[x][y] = '1';
				count--;
			}
		}
	}
}
//������Χ 8 �����ӷ�Χ�ڵ� ը������  
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	int i = 0, count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			count += (mine[i][j] - '0');//�������
		}
	}
	return count;//��������
}

//�ų�ը��
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�������ų�����:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("ը����ը����Ϸ������\n");
				//����ٿ�һ��ը��������λ��
				DisplayBoard(mine, ROW, COL);
				printf("\n");
				break;
			}
			else
			{
				int count = GetMine(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
			}
		}
		else
			printf("������Χ��\n");
	}
}