#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	

	//描述
	//	小乐乐输入百分制成绩，他想将成绩转换成等级制。转换规则为：90 - 100为’A’，80 - 89为’B’，70 - 79为’C’，60 - 69为’D’，59以下为’E’。如果输入的成绩不在0 - 100之间，输出’F’。
	
	//	输入描述：
	//	一行，一个整数表示的成绩。
	
	//	输出描述：
	//	一行，转换后的等级。


	//示例1
	//	输入：
	//	78
		
	//	输出：
	//	C


	//简单写法  难的写法 可以看以前的代码
	int a = 0;
	scanf("%d", &a);
	if (a >= 90 && a <= 100)// 逻辑与 &&  逻辑或 ||  按位与 &  按位或 |  按位异或 ^
		printf("A");
	else if (a >= 80 && a < 90)
		printf("B");
	else if (a >= 70 && a < 80)
		printf("C");
	else if (a >= 60 && a < 70)
		printf("D");
	else if (a >= 0 && a < 60)
		printf("E");
	else
		printf("F");







	//描述
	//	给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，请编程帮他实现。
	
	//	输入描述：
	//	共3行
	//	第一行，一个整数，表示n（1 <= n <= 100）。
	//	第二行，共输入n个整数，两个整数之间用空格分隔。
	//	第三行，输入一个整数，表示要查找的整数x。
	
	//	输出描述：
	//	一行，表示整数x出现的次数。

	//	输入：
	//	5
	//	1 1 2 1 3
	//	1
	//	输出：
	//	3




	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i = 0;

	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}

	int x = 0, sum = 0;//这里 x忘记用scanf取了
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (x == arr[i])
		{
			sum++;
		}
	}
	printf("%d", sum);













	//	BoBo老师教了KiKi学习程序设计基础，他知道C++是带类的C语言，这个“++”主要包含三部分内容：对C语言进行语法上的扩展、面向对象（封装、继承和多态），STL(即模板)。这学期KiKi学习了C和C++，学好他们，其他编程语言都可以很轻松掌握。C和C++的输入有区别，请帮KiKi输出C和C++输出Hello world的代码。

	//	输入描述：
	//	无

	//	输出描述：
	//	printf("Hello world!\n");
	//cout << "Hello world!" << endl;


	printf("printf(\"Hello world!\\n\");\n");//看所要求的输出是两行 最后应该加个 \ｎ　换行
	printf("cout << \"Hello world!\" << endl;");
	// 这里 考察 转义字符 \ 的用处 双引号配对情况 加个 \ 防止被转义
	// 审题  这里没有真的叫你用 C++打印
	
	
	
	return 0;

}