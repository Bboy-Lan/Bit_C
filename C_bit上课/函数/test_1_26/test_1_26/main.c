#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include"add.h"





////函数的申明和定义
//#pragma comment(lib,"test_1_27")//注意这个文件存放的位置
//int main() {
//	int a = 10;
//	int b = 20;
//	int num = Add(a, b);
//	printf("%d\n", num);
//	return 0;
//}



//int main()
//{
//	//函数的 链式访问
//	printf("%d",printf("%d", printf("%d", 43)));//printf返回值是 需要打印的字符个数 4321
//	return 0;
//}


//int binary_search(int arr[],int k,int len)//找到返回下标 没找到返回-1
//{
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return left - 1;
//	}
//	if (left > right)
//		return -1;
//}
//
////函数 二分查找的实现
//int main() {
//	int arr[] = { 1,3,6,7,8,95,99,102,658};
//	int k = 55;//需要查找数字的下标
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//	int num = 0;
//	num = binary_search(arr, k, len);
//	if (num == -1)
//		printf("没找到\n");
//	else
//		printf("%d\n", num);
//	return 0;
//}


//int is_year(int n) {
//	if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	return 0;//不是闰年
//	//或者直接 return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//
////函数 判断闰年
//int main() {
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_year(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}



//int is_prim(int n) {
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)//不是素数
//			return 0;
//	}
//	return 1;//是素数
//}
//
//int main() {
//	//判断100 -200中的数是不是素数
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		if (is_prim(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}




////函数-实参 形参区别
//void Swap(int * a, int * b) {//形参只是实参的一份临时拷贝
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main() {
//	int a = 6, b = 9;
//	printf("交换前：a = %d , b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a = %d , b = %d\n", a, b);
//	return 0;
//}


//// void * 类型指针可以指向所有类型
//
//int main() {
//	char arr1[] = "##############";
//	char arr2[] = "hello world!";
//	strcpy(arr1, arr2);//将arr2中的内容复制到arr1当中
//	printf("%s\n", arr1);
//	memset(arr1, '*', 6);//以字节作为单位
//	printf("%s\n", arr1);
//	return 0;
//}


////求解最大公约数 暴力方法 一个一个试
//int main() {
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int m = a < b ? a : b;
//	while (1) {
//		if (a % m == 0 && b % m == 0)
//		{
//			printf("最大公约数为：%d\n", m);
//			break;
//		}
//		m--;
//	}
//	return 0;
//}
