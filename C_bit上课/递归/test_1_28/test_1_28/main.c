#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int count = 0;
int Fib1(int num)
{
	if (num == 3)//�鿴ĳһ�����ظ��������
	{
		count++;
	}
	if (num <= 2)
		return 1;
	else
		return Fib1(num - 1) + Fib1(num - 2);
}

int Fib2(int num)//�ǵݹ���
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (num > 2)//�������ƶϵ�
	{
		c = a + b;
		a = b;
		b = c;
		num--;
	}
	return c;
}
//쳲��������� 1 1 2 3 5
int main()
{
	int ret1 = Fib1(40);
	int ret2 = Fib2(40);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	printf("����3���ظ��������Ϊ��%d\n", count);
	return 0;
}

////�ݹ�ʵ�� n�Ľ׳�
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
//int fac(int n)//��ĳ�����Ľ׳�
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
//
//// n ���׳˵ĺ� 1! + 2! + 3! + ...
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