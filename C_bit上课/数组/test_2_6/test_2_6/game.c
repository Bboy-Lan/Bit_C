#include"game.h"

//存放游戏主体函数
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

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//三组 打印六行
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//打印一小行
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


//玩家移动  用 * 表示
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("-------------玩家移动-------------\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入下棋坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//坐标输入合法则继续
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
				printf("位置已被占用\n");
		}
		else
			printf("超出棋盘范围！\n");
	}
}



//电脑移动  用 # 表示
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("-------------电脑移动-------------\n");

	while (1)
	{
		int x = rand() % row ;//没有 + 1 自己注意
		int y = rand() % col ;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断棋盘是否已经放满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if(board[i][j] == ' ')
				return 0;//未满
		}
	}
	return 1;//满了
}


//判断输赢 一行 一列  正反对角线  输 赢 平局 继续
char IsWin(char board[ROW][COL], int row, int col)
{
	//比较三行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	//比较三列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//比较对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

	//第二遍复习的时候 这一步被难了半天 ...
	if (IsFull(board, row, col))//说明已经装满 平局 Q
	{
		return 'P';
	}
	return 'C';//还未分胜负 继续
}