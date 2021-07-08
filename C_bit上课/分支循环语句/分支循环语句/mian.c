#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{



	int ch;
	while ((ch = getchar()) != EOF)//直到出现Ctrl+z结束
	{

		if (ch < '0' || ch > '9')//逻辑或  满足一个条件就执行 
		{
			continue;// 这意思是 只要不是 0-9 范围内的字符  就继续循环执行
		}
		putchar(ch);//放在 if 里面 外面是有区别的 放在里面 就相当于永远执行不了

	}





	int ch = 0;//为什么数据类型是 int 
	while ((ch = getchar()) != EOF)// EOF 返回值 -1  当getchar（）获取失败时 返回EOF -1  本质上讲 键盘上的字符都是十进制整数型 因此是 int 
	{
		putchar(ch);
	}


	//switch case 语句应用

	int n = 5;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default:
		printf("输入指令有误!");
		break;


	}

	// 养成 写 break 的习惯  注意一下 switch格式




	//判断 1-100 之间 的奇数

	int i;
	for (i = 1; i <= 100; i++)// for 循环的地方 都能用while 解决 只是难易及表达复杂程度不同
	{
		if (i % 2 != 0)
			printf("%d ", i);
	}



	return 0;
}