#include"game.h"

//�����Ϸ���庯��
void menu()
{
	printf("##################\n");
	printf("##### 1.PLAY #####\n");
	printf("##### 0.EXIT #####\n");
	printf("##################\n");
}

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//���� ��ӡ����
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//��ӡһС��
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}


//����ƶ�  �� * ��ʾ
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("-------------����ƶ�-------------\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("��������������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//��������Ϸ������
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
				printf("λ���ѱ�ռ��\n");
		}
		else
			printf("�������̷�Χ��\n");
	}
}



//�����ƶ�  �� # ��ʾ
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("-------------�����ƶ�-------------\n");

	while (1)
	{
		int x = rand() % row ;//û�� + 1 �Լ�ע��
		int y = rand() % col ;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//�ж������Ƿ��Ѿ�����
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if(board[i][j] == ' ')
				return 0;//δ��
		}
	}
	return 1;//����
}


//�ж���Ӯ һ�� һ��  �����Խ���  �� Ӯ ƽ�� ����
char IsWin(char board[ROW][COL], int row, int col)
{
	//�Ƚ�����
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	//�Ƚ�����
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//�Ƚ϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

	//�ڶ��鸴ϰ��ʱ�� ��һ�������˰��� ...
	if (IsFull(board, row, col))//˵���Ѿ�װ�� ƽ�� Q
	{
		return 'P';
	}
	return 'C';//��δ��ʤ�� ����
}