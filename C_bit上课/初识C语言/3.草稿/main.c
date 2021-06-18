#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int a = 1;//全局变量
extern int Max;
#define MAX 10//注意格式

enum Stage//格式的书写
{
	prime,
	middle,
	senior
	
};

int cmp(int a, int b)//这里我故意写的都是 a b 它们是不一样的  一个是全局变量一个是局部变量, Max也是 这就是前面变量里面 可行域的知识 自己翻翻
{
	if (a >= b)
		return a;
	else(a < b);
		return b;
}
int main()
{
	int a, b, Max;
	scanf("%d %d", &a, &b);
	Max= cmp(a, b);
	printf("Max=%d\n",Max);
	
	
	
	
	
	int i = 9;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//逆序打印数组内容
	while (i >= 0)//while()满足括号内容才执行
	{
		printf("%d\n", arr[i]);
		i--;
	}
	

	int sum = 0;
	printf("开始学习！\n");
	
	while (sum <20000)
	{
		printf("sum=%d 继续加油\n",sum);
		sum++;
	}
	
	
	printf("一份好offer");
	
	
	/*
	printf("%d\n", prime);
	printf("%d\n", middle);
	printf("%d\n", senior);
	int arr[senior] = {0};*/


	/*int arr[MAX] = {0};
	MAX = 5;
	printf("%d\n", MAX);*/


	int a = 5;
	int b = a << 1;//左移操作符
	printf("%d\n", b);
	 //5的二进制  这里运用到前面知识  a 是 int型  1byte =8bit
	 //故a的二进制编码 32位 a=5=2^2+2^0
	//00000000 00000000 00000000 00000101
	//左移操作符 最左侧移出去一个 最右边用0补上  右移操作符相反
	//00000000 00000000 00000000 00001010
	// 计算为10进制数字 
	//2^3+2^1=10




	/*printf("C:\\168\\test_lan\\bboy.txt");*/


	char ch1[] = "abcdefg";//7个字符
	char ch2[] = { 'a','b','c','d','e','f','g','\0'};//注意不是'/0'
	printf("%s\n", ch1);
	printf("%s\n", ch2);

	printf("%d\n", strlen(ch1));
	printf("%d\n", strlen(ch2));
	//strlen 是求字符串的长度 由几个字符构成










	//当我们需要打印一个 ’(单引号) 的时候 
	int ch1[] = {'\''};
	printf("%c\n",ch1);
	//当我们需要打印一个双引号的时候
	int ch2[] = { '\''};
	printf("%c\n",ch2);










	char ch[] = "你好！";
	printf("hello_world\n");
	char ch1[] = { 'a','a','c' };
	printf("%s\n", ch1);



	int address[] = { 1,2,3,4,5,6,7,8,9,10 };
	//这里下标标分   0,1,2,3,4,5,6,7,8,9 下标比里面元素个数少1
	int address[] = { 1,7,8,6,4,5,8};//声明一点 里面元素随意排列是无序的 我们数下标看的是元素个数 不是元素内容



	int address[] = {1,2,3,4,5,6,7,8,9,10};
	//方框里面的值可填可不填 但是里面填的一定是常量（不变的量）它规定的是你这个数组能装元素的大小
	int address[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//注意格式 数据类型+名字+[]={内容} 内容的类型也是和数据类型相对应
	
	char ch1[] = { 'a','a','c' };//字符
	char ch2[20] = { 'a','a','c' };
	//可以看出 [] 里面的数只能比后面{}里面的元素多 一旦少了就会装不下报错
	char ch3[] = "你好！";//字符串




	printf("Max=%d\n", Max);
	int a = 10;//局部变量
	printf("a = %d\n", a);
	在输出时 这里会优先输出局部变量的10 而不是a=1
	
			  
			  
	 int 整数型
	 short 短整型
	 long 长整型
	long long 长整型  
	float 单精度浮点型
	double 双精度浮点型
	/*
	这里 不同操作系统中long long 的大小或许会有差异
	但是 longlong 都比long大
	*/

	用 sizeof()求类型所占字节
	/*printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));*/

	





	return 0;
}
