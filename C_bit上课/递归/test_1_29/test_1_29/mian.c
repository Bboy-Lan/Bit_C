#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

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
	//int ret1 = Fib1(40);
	int ret2 = Fib2(40);
	//printf("%d\n", ret1);
	printf("%d\n", ret2);
	printf("����3���ظ��������Ϊ��%d\n", count);
	return 0;
}
////k ֵ��Ҫ����  > 0   < 0  = 0
//int fac(int n, int k)
//{
//	if (k > 0)
//		return n * fac(n, k - 1);
//	else if (k < 0)
//		return 1.0 / n * fac(n, k - 1);
//	else// ����0
//		return 1;
//}
////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�� 
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d��%d�η����Ϊ:��%d\n", n, k, fac(n, k));
//	return 0;
//}

////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
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


////�Զ��� ���ַ������Ⱥ���
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
////�ݹ�ʵ�� - ��Щ�����
//void reverse_string1(char* arr)
//{
//	int len = my_strlen(arr);
//	char temp = arr[0];
//	// �ȴ����� �ٵ��ý���
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';//Ϊɶ�� \0 ��Ϊ����֮��ֱ�Ӿ��� �� \0 ��ʼ ��ȡһ���ַ��� f bcde \0
//
//	if (my_strlen(arr + 1) >= 2)//����ֱ����len ���ж� ��Ϊÿһ�γ��ȶ��ڷ����ı�  ҪҪע������ݹ�Ľ�������
//		reverse_string1(arr + 1);//���� �� 1
//	arr[len - 1] = temp;
//
//}
////�ǵݹ�ʵ��
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
////��ת�ַ���
//int main()
//{
//	char arr[] = "abcdef";
//	//int len = sizeof(arr) / sizeof(arr[0]);
//	reverse_string1(arr);
//	//for (int i = 0; i < len; i++)
//	//{
//	//	printf("%c", arr[i]);
//	//}
//	printf("%s", arr);//����Ҫѭ�� ֱ�Ӵ�ӡ����
//	return 0;
//}





////�ݹ�ʵ��
//int my_strlen2(char* arr)
//{
//	//��ֹ�����ǣ�
//	if (*arr != '\0')
//		return 1 + my_strlen2(arr + 1);
//	else
//		return 0;
//
//}
////�ǵݹ�ʵ��
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
////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int main()
//{
//	char arr[] = "abcdefghijklmnopqrstuvwxyz";
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int num = my_strlen1(arr,len);
//	printf("%d\n", num);
//	printf("%d\n", my_strlen2(arr));
//	return 0;
//}


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

////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
