#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int f(int x)
{
	if (x > 0)
		return -1;

	else if (x = 0)
		return 0;

	else
		return 1;
}

int sum(int a)// static 的应用知识
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}

int main()
{
	
	//描述
	//	从键盘输入5个人的身高（米），求他们的平均身高（米）。

	//	输入描述：
	//	一行，连续输入5个身高（范围0.00~2.00），用空格分隔。
	//	输出描述：
	//	一行，输出平均身高，保留两位小数。
	
	//	示例1
	//	输入：
	//	1.68 1.75 1.82 1.60 1.92
	
	//	输出：
	//	1.75


	//方法一  硬干
	float a, b, c, d, e;
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e);
	printf("%.2f\n", (a + b + c + d + e) / 5.0);



	// 方法二  考虑较多 有些懵逼


	float arr[5], sum = 0.0, ave = 0.0;
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%f", &arr[i]);
		sum = sum + arr[i];
	}
	ave = sum / i;
	printf("%.2f", ave);







	//描述
		// = f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。

		//输入描述：
		//一行，输入一个整数x。（ - 10000 < x < 10000）
		//输出描述：
		//一行，输出y的值。
	int x;
	scanf("%d", &x);
	peirnf("%d\n", f(x));





	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));//看看运行结果是多少
	}



	return 0;

}