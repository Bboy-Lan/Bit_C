#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	//	请计算表达式“(-8 + 22)×a - 10 + c÷2”，其中，a = 40，c = 212。

	//	输入描述：
	//	无。
	//	输出描述：
	//	(-8 + 22)×a - 10 + c÷2计算之后的结果，为一个整数。


	int a = 40, c = 212, sum = 0;
	sum = (-8 + 22) * a - 10 + c / 2;
	printf("%d", sum);

	//这里注意一下 %  /  以及 printf里面 %c  %d  %f  对这两个算数操作符的影响




	
	//	你的手机丢了，在屏幕上输出信息告诉大家。
	//	输入描述：
	//	无
	//	输出描述：
	//	I lost my cellphone!
	
	
	printf("I lost my cellphone!");
	
	return 0;

}