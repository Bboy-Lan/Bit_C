#include"game.h"


//����Ϸ��غ���

//�˵�
void menu()
{
	printf("---��������Ϸ---\n");
	printf("################\n");
	printf("#### 1.PLAY ####\n");
	printf("#### 0.EXIT ####\n");
	printf("################\n");
}

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//��ʼ��Ϊ�ո�
		}
	}
}

//��ӡ���� һ���ַ�һ�зָ��� �ֿ���������Ч��
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//���Ǵ�ӡһ��
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//������ô��ʾ ��
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


//����ƶ� * ��ʾ
void PlayerMove(char board[ROW][COL], int row, int col)
{
	//���������ʾ
	int x = 0;
	int y = 0;
	printf("--------------------------\n");

	printf("---------�������---------\n");

	printf("����������λ��:>");
	while (1)
	{
		scanf("%d%d", &x, &y);
	
		if (x > 0 && x <= row && y > 0 && y <= col)//���� ������Ҫ�Ϸ�
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ�ò����ã�\n");
				printf("������������λ��:>");
			}
		}
		else
		{
			printf("�������̷�Χ��\n");
			printf("������������λ��:>");
		}
    }
}


//�����ƶ�  # ��ʾ
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("--------------------------\n");

	printf("---------��������---------\n");


	while (1)
	{
		int x = rand() % row;//������� ����
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//�ж�������û�з���
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
char IsWin(char board[ROW][COL], int row, int col)
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
