#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//递归和非递归分别实现求第n个斐波那契数

int count = 0;
int Fib1(int num)
{
	if (num == 3)//查看某一步的重复计算次数
	{
		count++;
	}
	if (num <= 2)
		return 1;
	else
		return Fib1(num - 1) + Fib1(num - 2);
}

int Fib2(int num)//非递归求法
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (num > 2)//清楚如何推断的
	{
		c = a + b;
		a = b;
		b = c;
		num--;
	}
	return c;
}
//斐波拉契函数 1 1 2 3 5
int main()
{
	//int ret1 = Fib1(40);
	int ret2 = Fib2(40);
	//printf("%d\n", ret1);
	printf("%d\n", ret2);
	printf("其中3的重复计算次数为：%d\n", count);
	return 0;
}
////k 值需要讨论  > 0   < 0  = 0
//int fac(int n, int k)
//{
//	if (k > 0)
//		return n * fac(n, k - 1);
//	else if (k < 0)
//		return 1.0 / n * fac(n, k - 1);
//	else// 等于0
//		return 1;
//}
////编写一个函数实现n的k次方，使用递归实现 
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d的%d次方结果为:：%d\n", n, k, fac(n, k));
//	return 0;
//}

////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);//1234--10
//	printf("%d\n", DigitSum(n));
//	return 0;
//}


////自定义 求字符串长度函数
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
////递归实现 - 有些难理解
//void reverse_string1(char* arr)
//{
//	int len = my_strlen(arr);
//	char temp = arr[0];
//	// 先处理交换 再调用交换
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';//为啥放 \0 因为放了之后直接就能 从 \0 开始 截取一段字符串 f bcde \0
//
//	if (my_strlen(arr + 1) >= 2)//不能直接用len 来判断 因为每一次长度都在发生改变  要要注意这个递归的结束条件
//		reverse_string1(arr + 1);//不是 减 1
//	arr[len - 1] = temp;
//
//}
////非递归实现
//void reverse_string2(char* arr)
//{
//	int len = my_strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
////反转字符串
//int main()
//{
//	char arr[] = "abcdef";
//	//int len = sizeof(arr) / sizeof(arr[0]);
//	reverse_string1(arr);
//	//for (int i = 0; i < len; i++)
//	//{
//	//	printf("%c", arr[i]);
//	//}
//	printf("%s", arr);//不需要循环 直接打印即可
//	return 0;
//}





////递归实现
//int my_strlen2(char* arr)
//{
//	//终止条件是？
//	if (*arr != '\0')
//		return 1 + my_strlen2(arr + 1);
//	else
//		return 0;
//
//}
////非递归实现
//int my_strlen1(char arr[],int len)
//{
//	int num = 0;
//	for (int i = 0 ;i < len ;i++)
//	{
//		if(arr[i] != '\0')
//			num++;
//	}
//	return num;
//}
////递归和非递归分别实现strlen
//int main()
//{
//	char arr[] = "abcdefghijklmnopqrstuvwxyz";
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int num = my_strlen1(arr,len);
//	printf("%d\n", num);
//	printf("%d\n", my_strlen2(arr));
//	return 0;
//}


////递归实现 n的阶乘
//int main()
//{
//	int num = 1, i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		num = num * i;
//	}
//	printf("%d\n", num);
//	return 0;
//}
//
//int fac(int n)//求某个数的阶乘
//{
//	int num = 1, i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		num = num * i;
//	}
//	return num;
//}
//int fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac1(n - 1);
//}



//// n 个阶乘的和 1! + 2! + 3! + ...
//int main()
//{
//	int sum = 0, i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + fac(i);
//	}
//	printf("%d\n", sum);
//	printf("%d\n", fac1(n));
//
//	return 0;
//}

////递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	//1234
//	if (n > 9)
//		print( n / 10);
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
