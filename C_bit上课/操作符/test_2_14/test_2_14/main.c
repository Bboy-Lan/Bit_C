#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	return 0;
}



//int main()
//{
//	//交换 两个变量的值 不借助 临时变量 temp
//	int a = 3;
//	int b = 5;
//	printf("a = %d  b = %d\n", a, b);
//
//	//这种方法可能会导致溢出  a + b
//	a = a + b;
//	b = a - b;//将 a 的值赋值给b
//	a = a - b;
//
//	printf("交换:a = %d  b = %d\n", a, b);
//
//	//异或的方法 ^  0^a = a  a^a = 0    a^a^b = b   a^b^a = a  支持交换律
//	
//	a = a ^ b;//得到一个中间数
//	b = a ^ b;//中间数和b异或得到 a
//	a = a ^ b;//中间数和a异或得到 b
//	//代码可读性不好 只适用于整形
//	printf("异或:a = %d  b = %d\n", a, b);
//	return 0;
//}
