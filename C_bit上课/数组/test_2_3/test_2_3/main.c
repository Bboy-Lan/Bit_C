#include"game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//注意此处的传参  ROWS COLS
	InitBoard(show, ROWS, COLS, '*');
	
	////打印棋盘
	//DisplayBoard(mine, ROW, COL);
	//printf("\n");
	//DisplayBoard(show, ROW, COL);
	
	//设置炸弹
	printf("\n");
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//探查炸弹
	printf("\n");
	FindMine(mine,show, ROW, COL);
	//注意传参 两个数组  mine 数组中排查信息  show 数组中记录
	//DisplayBoard(show, ROW, COL);

}	

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		//打印菜单
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("游戏结束！\n");
			break;
		case 1:
			printf("\n");
			printf("-----------游戏开始-----------\n");
			//游戏主体函数
			game();
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}