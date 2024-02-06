#include"game.h"

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//初始化两个棋盘
	InitBoard(mine, ROWS, COLS, '0');//埋雷数组
	InitBoard(show, ROWS, COLS, '*');//展示数组

	//布置炸弹
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//打印棋盘
	printf("\n");
	DisplayBoard(show, ROW, COL);//只需要打印 9*9 的部分即可
	
	//排除炸弹
	printf("\n");
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏！\n");
			break;
		case 1:
			printf("-----------扫雷开始----------\n");
			printf("\n");
			game();
			break;
		default:
			printf("输入有误！\n");
			break;
		}
	} while (input);
	return 0;
}