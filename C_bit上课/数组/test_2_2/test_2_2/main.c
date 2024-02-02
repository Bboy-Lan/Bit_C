#include"game.h"

//游戏主体函数
void game()
{
	char ret;
	char board[ROW][COL];//定义棋盘数组
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//移动一次打印一次 观察效果
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家获胜！\n");
	else if(ret == '#')
		printf("电脑获胜！\n");
	else
		printf("平局！\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		//打印菜单 
		menu();
		printf("\n请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0 :
			printf("游戏结束！\n");
			break;
		case 1:
			printf("游戏开始！\n");
			game();//游戏函数
			break;
		default:
			printf("输入错误！\n");
			break;
		}
	} while (input);
	return 0;
}