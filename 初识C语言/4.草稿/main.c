#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void test()
{
	static int a = 1;
	a += 1;
	printf("%d ", a);
}
typedef unsigned int uint;





#define Max(x,y) (x>y ? x : y)//这里注意格式 
int main()
{
	int a = 1;
	int b = 2;
	int c = Max(a, b);
	printf("%d\n", c);




	/*int a = 1;
	int b = 2;
	int c=Add(a, b);
	printf("%d\n", c);
*/



	/*int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	*/
	
	
	
	/*uint b = 10;
	printf("%d\n", b);*/

	//int int = 0;

	////函数调用操作符
	//int a, b;
	//printf("hello world!\n");
	//Add(a, b);

	//test();





	//逗号表达式
	//逗号表达式 从左往右开始进行计算
	// 它最后的运算结果是最后一个式子的值
	//int a = 5,b=4,c=3;
	//int d = (a = b + 5, b = a - 6 , c = b + a, c -= 1);
	//// a=9  b=3  c=12 c=11  d=11
	//printf("%d\n", d);


	////条件操作符
	//int a = 5;
	//int b;
	//if (a == 5)
	//{
	//	b = 6;
	//}
	//else
	//{
	//	b = -6;
	//}
	//b = (a == 5) ? 6 : -6;
	//printf("%d\n", b);
	//	/*a = 5 ? printf("你好\n") : printf("我不好\n");*/

	 
	 
	//逻辑操作符
	// &&逻辑与   || 逻辑或
	/*int a = 1,b=2;
	if (a == 1 || b == 1)
	{
		printf("hello\n");
	}
	else
	{
		printf("出错了\n");
	}*/

	//int a = (int)3.14;

	//printf("%d\n", a);


	////后置++
	//int a = 1;
	//a++;
	//printf("%d\n", a);//-- 亦同


	//前置后置 ++ --
	//前置++ 

	//前置 --
	//int a = 1;
	//int c = --a;//a先 c后使用
	//printf("%d\n",a);//a=0 c=0
	//printf("%d\n", c);


	/*int a = 0;
	printf("%d\n", ~a);*/

	//
	//// + - 字面意思
	//int a = 1;
	//int b = +a;
	//int c = -a;


	
	////单目操作符就是只面对一个变量
	////而双目操作符面对两个变量 如 + - = 两边两个变量
	////同理 三目操作符面对三个变量 
	//int a = 1;
	////在C语言里面 通常 0表示假 1表示真
	//printf("%d\n", !a);
	//if (a)//a成立 进行
	//{

	//}
	//if (!a)//a不成立 进行
	//{

	//}









	//int a = 10;

	//a = a + 3;
	//a += 3;//可以写成

	//a = a & 3;//按位与
	//a &= 3;//可以写成

	//a = a << 3;
	//a <<= 3;//可以写成




	////打印出字母A
	//printf("%c\n", 65);
	////反打印 A的ANCII码值

	//printf("%d\n",'A');


	////system("pause");
	return 0;

}