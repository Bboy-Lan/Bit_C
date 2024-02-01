#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//三子棋游戏过程
void game()
{
	char board[ROW][COL];//棋盘数组
	//初始化棋盘 将里面置为空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	
	int ret = 0;
	while (1)
	{
		//玩家移动
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//移动一次就打印
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') //不是字符C 则游戏结束
		{
			break;
		}
		//电脑移动
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//移动一次就打印
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') //每次打印之后都要添加判断
		{
			break;
		}
	}
	if (ret == '*') 
	{
		printf("玩家获胜！\n");
		printf("----------------\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜！\n");
		printf("----------------\n");
	}
	else
	{
		printf("平局！\n");
		printf("----------------\n");

	}
}



//测试游戏
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));// 随机数生成
	do
	{
		menu();//打印菜单栏
		printf("请选择 > ");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
		{
			printf("游戏结束！\n");
			break;
		}
		case 1:
		{
			printf("--------三子棋游戏---------\n");
			game();//游戏函数
			break;
		}
		default:
		{
			printf("输入错误！\n");
			break;
		}
		}
	} while (input);
	return 0;
}