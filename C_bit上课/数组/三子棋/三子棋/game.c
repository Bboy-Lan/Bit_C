#pragma once

#include"game.h"

//存放游戏实现函数

void menu()
{
	printf("################\n");
	printf("#### 1.PLAY ####\n");
	printf("#### 0.EXIT ####\n");
	printf("################\n");
}

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)//为啥还要传过去行和列 ？
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//赋值空格
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	////这样打印看不出效果
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

	////将 一行数据和一行分割行看做一组  先打印数据 后打印分割行  最后一组只打印数据 不打印分割行即可
	////     1| 2 | 3
	////     -| - | -
	////     1| 2 | 3
	////     -| - | -
	////     1| 2 | 3

	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//	//打印数据
	//	printf(" %c | %c | %c \n", board[i][0], board[i][1],board[i][2]);//这样太死板 一旦行列改变就得重新
	//	//打印分割行
	//	if(i < row - 1)//最后一行不打印分隔符
	//		printf("---|---|---\n");
	//}

	//这样打印就更加灵活多变
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

//玩家移动
void PlayerMove(char board[ROW][COL], int row, int col)
{
	//玩家移动
	printf("-----------------------------\n");

	printf("-----------玩家移动-----------\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入下棋位置:>");
		scanf("%d%d", &x, &y);//输入横纵坐标
		//判断下棋点是否已经被使用过
		if (x >= 1 && x <= row && y >= 1 && y <= col)//行 列  x y 直角坐标
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;//输入一次就结束 等待电脑输入
			}
			else
			{
				printf("坐标已经被使用\n");
			}
		}
		else
		{
			printf("不在合法坐标范围\n");
		}
	}

}


//电脑移动
void ComputerMove(char board[ROW][COL], int row, int col)
{
	//电脑移动
	int x = 0;
	int y = 0;
	//电脑的坐标是随机的  srand 函数
	printf("-----------------------------\n");

	printf("-----------电脑移动-----------\n");
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


//判断输赢  应该有四种状态 --->  赢了 * 输了# 平局 Q 继续游戏 C
char Iswin(char board[ROW][COL], int row, int col)
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
	//行
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
