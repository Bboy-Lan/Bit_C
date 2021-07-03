#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

extern int MAX;

int main()
{


	//判断一个整数是否能5整除  
	//输入  包括一个整数M（1≤M≤100, 000）
	//输出  包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）
	int M = 0;
	scanf("%d", &M);
	if (M % 5 == 0)//能被5整除 说明最后取得余数为 0   % 为取余数（也称为取模）
		printf("YES");
	else
		printf("No");

	





	//printf("%d\n", strlen("C:\168\tasks\bboy.txt"));
	//strlen是求字符串的长度 应该是字节


	//char ch1[] = { "abcdefg" };
	//char ch2[] = { 'a','b','c','d','e','f','g'};

	//printf("%s\n", ch1);
	//printf("%s\n", ch2);

	//printf("ch1= %d\n", strlen(ch1));
	//printf("ch2= %d\n", strlen(ch2));






	////当需要打印一个单引号时
	//char arr1[] = {'\''};
	//printf("%s\n",arr1);
	//
	////当需要打印一个双引号时
	//char arr2[] = {"\""};
	//printf("%s\n",arr2);



	//int arr[10];
	//printf("%c\n", 90);
	//printf("%d\n",'Z');
	
	return 0;

}