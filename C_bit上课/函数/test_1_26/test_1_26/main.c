#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include"add.h"





////�����������Ͷ���
//#pragma comment(lib,"test_1_27")//ע������ļ���ŵ�λ��
//int main() {
//	int a = 10;
//	int b = 20;
//	int num = Add(a, b);
//	printf("%d\n", num);
//	return 0;
//}



//int main()
//{
//	//������ ��ʽ����
//	printf("%d",printf("%d", printf("%d", 43)));//printf����ֵ�� ��Ҫ��ӡ���ַ����� 4321
//	return 0;
//}


//int binary_search(int arr[],int k,int len)//�ҵ������±� û�ҵ�����-1
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
////���� ���ֲ��ҵ�ʵ��
//int main() {
//	int arr[] = { 1,3,6,7,8,95,99,102,658};
//	int k = 55;//��Ҫ�������ֵ��±�
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//	int num = 0;
//	num = binary_search(arr, k, len);
//	if (num == -1)
//		printf("û�ҵ�\n");
//	else
//		printf("%d\n", num);
//	return 0;
//}


//int is_year(int n) {
//	if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	return 0;//��������
//	//����ֱ�� return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//
////���� �ж�����
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
//		if (n % j == 0)//��������
//			return 0;
//	}
//	return 1;//������
//}
//
//int main() {
//	//�ж�100 -200�е����ǲ�������
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		if (is_prim(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}




////����-ʵ�� �β�����
//void Swap(int * a, int * b) {//�β�ֻ��ʵ�ε�һ����ʱ����
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main() {
//	int a = 6, b = 9;
//	printf("����ǰ��a = %d , b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("������a = %d , b = %d\n", a, b);
//	return 0;
//}


//// void * ����ָ�����ָ����������
//
//int main() {
//	char arr1[] = "##############";
//	char arr2[] = "hello world!";
//	strcpy(arr1, arr2);//��arr2�е����ݸ��Ƶ�arr1����
//	printf("%s\n", arr1);
//	memset(arr1, '*', 6);//���ֽ���Ϊ��λ
//	printf("%s\n", arr1);
//	return 0;
//}


////������Լ�� �������� һ��һ����
//int main() {
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int m = a < b ? a : b;
//	while (1) {
//		if (a % m == 0 && b % m == 0)
//		{
//			printf("���Լ��Ϊ��%d\n", m);
//			break;
//		}
//		m--;
//	}
//	return 0;
//}
