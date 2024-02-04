#include"game.h"

//打印菜单
void menu()
{
	printf("---扫雷游戏---\n");
	printf("\n");
	printf("######################\n");
	printf("####### 1.PLAY #######\n");
	printf("####### 0.EXIT #######\n");
	printf("######################\n");
	printf("\n");
	printf("--------------\n");
}

//初始化函数
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

//打印函数
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 0; i <= row; i++)//打印数组行下标索引
	{
		printf(" %d ", i);
		if (i == 0)
			printf("|");
	}
	printf("\n------------------------------\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf(" %d |", i);//打印数组行下标索引

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
		//设置随机炸弹坐标 10 个炸弹
		int x = rand() % row + 1;
		int y = rand() % col + 1;//坐标落在 9 * 9 的格子之间

		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
		//这步纯属多余 如果字符不对会重新进入循环 不应该在这考虑半天
		//else       
		//	continue;
	}
}

//获取 输入位置 旁边 8 个点的坐标
char GetMine(char mine[ROWS][COLS], int x, int y)
{
	//此处传入 mine 函数用来查雷  还有自己输入的坐标 x 和 y
	int i = 0,j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			////除开自己这个位置  不用除开 因为调用这个函数就说明了其不可能是炸弹
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

//探查炸弹 两个数组辅助
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入排查位置:>");
		scanf("%d%d", &x, &y);
		//验证坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1') 
			{
				printf("你被炸死了！\n");
				//死之后 看一下所有炸弹的位置
				DisplayBoard(mine, ROW, COL);
				break;
			}
			//如果没有选到炸弹
			else
			{
				int count = GetMine(mine, x, y);//注意传参
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入位置不合法！\n");
		}
	}
	if (win < row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
	}
}

//展开函数 递归实现
//该坐标不是雷 周围没有雷 并且其本身也未被排查过就能满足展开


//也可以添加一个标记 表明已经判断出了是否是雷