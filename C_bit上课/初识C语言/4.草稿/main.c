#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>





#include<stdio.h>


//struct sortsjavascript:void(0);
//{

//};
int test(int input)
{
	if (0 <= input <= 5)
	{
		return 4;
	}
	else
	{
		if (input == 6)
			return 3;
		else if (input == 7)
			return 2;
		else if (input == 8)
			return 1;
		else if (input == 9)
			return 0;
	}
}
int main()
{
	//看题目应该是需要结构体定义  先试试
	int input;
	scanf("%d", &input);
	char ch[6] = { 'A','B','C','D','E','F' };
	int plus = input / 10;
	printf("%c", test(input));


	return 0;
}










//void test()
//{
//	static int a = 1;
//	a += 1;
//	printf("%d ", a);
//}
//typedef unsigned int uint;

//int main()
//{

	//int input;
	//scanf("%d", &input);
	//int ch[6] = { 65,66,67,68,69,70 };
	//int plus = input / 10;
	//int n = plus - 1;
	//int a = ch[n];
	//printf("%c", a);

	//相关知识


	//struct sorts
	//{

	//};


	////int input;
	//scanf("%d", &input);
	//while (0 <= input <= 100)
	//{
	//	if (90 <= input && input <= 100)
	//	{
	//		printf("A");
	//		break;
	//	}
	//	if (80 <= input && input <= 89)
	//	{
	//		printf("B");
	//		break;
	//	}
	//	if (70 <= input && input <= 79)
	//	{
	//		printf("C");
	//		break;
	//	}
	//	if (60 <= input && input <= 69)
	//	{
	//		printf("D");
	//		break;
	//	}
	//	if (input <= 59)
	//	{
	//		printf("E");
	//		break;
	//	}

	//}
	//if (100 < input || input < 0)
	//{
	//	printf("F");
	//}



	


	//int input;
	//scanf("%d", &input);
	//while (0 <= input <= 100)
	//{
	//	if (90 <= input && input <= 100)
	//	{
	//		printf("A");
	//	}
	//	if (80 <= input && input <= 89)
	//	{
	//		printf("B");
	//	}
	//	if (70 <= input && input <= 79)
	//	{
	//		printf("C");
	//	}
	//	if (60 <= input && input <= 69)
	//	{
	//		printf("D");
	//	}
	//	if (input <= 59)
	//	{
	//		printf("E");
	//	}

	//}
	//if (100 < input || input < 0)
	//{
	//	printf("F");
	//}

	return 0;

	//int a = 10;
	//char* pa = &a;
	//*pa = 20;
	//printf("%p\n", a);
	//printf("%p\n", pa);
	//printf("%p\n", *pa);








	//int a = 1;
	//int b = 2;
	//int c = Max(a, b);
	//printf("%d\n", c);




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
//	return 0;
//
//}