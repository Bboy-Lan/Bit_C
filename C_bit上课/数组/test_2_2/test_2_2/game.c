#include"game.h"


//放游戏相关函数

//菜单
void menu()
{
	printf("---三子棋游戏---\n");
	printf("################\n");
	printf("#### 1.PLAY ####\n");
	printf("#### 0.EXIT ####\n");
	printf("################\n");
}

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//初始化为空格
		}
	}
}

//打印棋盘 一行字符一行分隔符 分开做出棋盘效果
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//都是打印一行
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//这里怎么表示 ？
			if (j < col - 1)
				printf("|");

		}
		printf("\n");
		if (i < row - 1)//最后一行不打印分隔符
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


//玩家移动 * 表示
void PlayerMove(char board[ROW][COL], int row, int col)
{
	//横纵坐标表示
	int x = 0;
	int y = 0;
	printf("--------------------------\n");

	printf("---------玩家下棋---------\n");

	printf("请输入下棋位置:>");
	while (1)
	{
		scanf("%d%d", &x, &y);
	
		if (x > 0 && x <= row && y > 0 && y <= col)//首先 坐标需要合法
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置不可用！\n");
				printf("重新输入下棋位置:>");
			}
		}
		else
		{
			printf("超出棋盘范围！\n");
			printf("重新输入下棋位置:>");
		}
    }
}


//电脑移动  # 表示
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("--------------------------\n");

	printf("---------电脑下棋---------\n");


	while (1)
	{
		int x = rand() % row;//电脑随机 落子
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断棋盘有没有放满
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

//判断输赢  应该有四种状态 --->  赢了 * 输了# 平局 Q 继续游戏 C
char IsWin(char board[ROW][COL], int row, int col)
{
	//1.判断输赢  三行三列 两对角线
	//行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//三个相等并且其中一个不为空格
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];//这里巧妙设计 谁赢了就返回谁 不用太过复杂的考虑
		}
	}
	//列
	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[0][j];//这里巧妙设计 谁赢了就返回谁 不用太过复杂的考虑
		}
		//两条对角线
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			return board[0][0];
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			return board[1][1];
		//2.判断平局 
		if (IsFull(board, row, col))
		{
			return 'Q';
		}
	}
	return 'C';
}
