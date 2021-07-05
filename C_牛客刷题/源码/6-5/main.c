#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int MAX(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}
int main()
{
	
	//描述
		//判断一个整数是否能5整除是一个挺简单的问题，懒惰的KiKi还是不想自己做，于是找到你帮他写代码

		//输入描述：
		//输入包括一个整数M（1≤M≤100, 000）
		
		//输出描述：
		//输出包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）
	
	
	int M;
	scanf("%d", &M);
	if (M % 5 == 0)
		printf("YES");
	else
		printf("NO");
	
	
	
	

	
	//写一个函数求两个整数的较大值

		//输入：10 20

		//输出较大值：20
	int a , b;
	scanf("%d%d", &a, &b);
	
	printf("%d\n", MAX(a, b));

	
	return 0;

}