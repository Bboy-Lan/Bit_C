#include"game.h"

//菜单函数
void menu()
{
	printf("\n");
	printf("------扫雷游戏-----\n");
	printf("\n");
	printf("####################\n");
	printf("###### 1.PLAY ######\n");
	printf("###### 0.EXIT ######\n");
	printf("####################\n");
	printf("\n");
	printf("------扫雷游戏-----\n");
	printf("\n");
}

//初始化函数
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

//打印函数
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 0; i <= row; i++)//打印索引列表
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//这里下标从1开始  因为打印的是里面9*9的部分
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

//布置炸弹
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		//相比五子棋 这里就需要 + 1了 思考一下为什么？
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
//返回周围 8 个格子范围内的 炸弹数量  
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	int i = 0, count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			count += (mine[i][j] - '0');//变成数字
		}
	}
	return count;//返回数字
}

//排除炸弹
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入排除坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("炸弹爆炸，游戏结束！\n");
				//最后再看一下炸弹的整体位置
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
			printf("超出范围！\n");
	}
}