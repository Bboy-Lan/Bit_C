#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//解法一： 普通求解
int my_strlen1(char* s)
{
	int num = 0;
	while (*s != '\0')
	{
		num++;
		s++;//指针自加也相当于地址自加
	}
	return num;
}
//解法二： 递归求解
int my_strlen2(char * s)
{
	//判断是否是 \0  比如 abc  1 + my_strlen2（bc）... ...
	if (*s != '\0')
	{
		return 1 + my_strlen2(s + 1);
	}
	return 0;
}

//编写一个函数 不允许创建临时变量 求字符串的长度
int main()
{
	char arr[] = "abcdef";//长度为 6
	int len1 = 0,len2 = 0;

	len1 = my_strlen1(arr);
	printf("%d\n", len1);

	len2 = my_strlen2(arr);
	printf("%d\n", len2);
	return 0;
}





//void print(int num)
//{
//	//结束条件  并且是按顺序打印
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//
////递归-接受一个整型数值，按顺序打印它的每一位
//int main()
//{
//	unsigned int num;
//	scanf("%d", &num);
//	print(num);
//	//1234  1234 % 10 = 4  1234 / 10 = 123 
//	return 0;
//}



////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
////如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//
//int main() {
//	int i = 0, j = 0;//表示行数 列数
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%.2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//#pragma comment(lib,"test_1_27")
//
//void Swap(int *a,int *b)
//{
//	int temp = *b;
//	*b = *a;
//	*a = temp;
//}
//
//int main() {
//	
//	int a =22, b = 33;
//	Swap(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}