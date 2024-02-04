#include"game.h"

//��ӡ�˵�
void menu()
{
	printf("---ɨ����Ϸ---\n");
	printf("\n");
	printf("######################\n");
	printf("####### 1.PLAY #######\n");
	printf("####### 0.EXIT #######\n");
	printf("######################\n");
	printf("\n");
	printf("--------------\n");
}

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret)
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
	for (i = 0; i <= row; i++)//��ӡ�������±�����
	{
		printf(" %d ", i);
		if (i == 0)
			printf("|");
	}
	printf("\n------------------------------\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf(" %d |", i);//��ӡ�������±�����

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
		//�������ը������ 10 ��ը��
		int x = rand() % row + 1;
		int y = rand() % col + 1;//�������� 9 * 9 �ĸ���֮��

		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
		//�ⲽ�������� ����ַ����Ի����½���ѭ�� ��Ӧ�����⿼�ǰ���
		//else       
		//	continue;
	}
}

//��ȡ ����λ�� �Ա� 8 ���������
char GetMine(char mine[ROWS][COLS], int x, int y)
{
	//�˴����� mine ������������  �����Լ���������� x �� y
	int i = 0,j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			////�����Լ����λ��  ���ó��� ��Ϊ�������������˵�����䲻������ը��
			//if (i != x && j != y)
			//{
			//	if (board[i][j] == '1')
			//	{
			//		count++;
			//	}
			//}
			count += (mine[i][j] - '0');
		}
	}
	return count;
	//return (mine[x - 1][y] +
	//	mine[x - 1][y - 1] +
	//	mine[x][y - 1] +
	//	mine[x + 1][y - 1] +
	//	mine[x + 1][y] +
	//	mine[x + 1][y + 1] +
	//	mine[x][y + 1] +
	//	mine[x - 1][y + 1] - 8 * '0');
}

//̽��ը�� �������鸨��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("�������Ų�λ��:>");
		scanf("%d%d", &x, &y);
		//��֤����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1') 
			{
				printf("�㱻ը���ˣ�\n");
				//��֮�� ��һ������ը����λ��
				DisplayBoard(mine, ROW, COL);
				break;
			}
			//���û��ѡ��ը��
			else
			{
				int count = GetMine(mine, x, y);//ע�⴫��
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����λ�ò��Ϸ���\n");
		}
	}
	if (win < row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
	}
}

//չ������ �ݹ�ʵ��
//�����겻���� ��Χû���� �����䱾��Ҳδ���Ų����������չ��


//Ҳ�������һ����� �����Ѿ��жϳ����Ƿ�����