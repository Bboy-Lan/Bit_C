#include"game.h"

//存放游戏运行主体
void game()
{
	//棋盘二维数组
	char board[ROW][COL];
	int ret = 0;

	//初始化棋盘
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家移动
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')//如果不再继续就跳出循环  因为已经有结果了
		{
			break;
		}

		//电脑移动
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}//循环结束位置

		if (ret == '#')
		{
			printf("电脑赢了！\n");
		}
		else if (ret == '*')
		{
			printf("玩家赢了！\n");
		}
		else
		{
			printf("平局！\n");
		}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//菜单函数
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("游戏结束！\n");
			break;
		case 1:
			printf("----------三子棋游戏-----------\n");
			game();
			break;
		default:
			printf("输入错误！\n");
			break;
		}

	} while (input);
	return 0;
}