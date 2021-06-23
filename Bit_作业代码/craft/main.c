#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	
	//新的内容 打印
	//写一个代码打印1 - 100之间所有3的倍数的数字
	// 取模  和  取余数的  运用区别
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}

	}
	
	
	
	return 0;

}