#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ⷨһ�� ��ͨ���
int my_strlen1(char* s)
{
	int num = 0;
	while (*s != '\0')
	{
		num++;
		s++;//ָ���Լ�Ҳ�൱�ڵ�ַ�Լ�
	}
	return num;
}
//�ⷨ���� �ݹ����
int my_strlen2(char * s)
{
	//�ж��Ƿ��� \0  ���� abc  1 + my_strlen2��bc��... ...
	if (*s != '\0')
	{
		return 1 + my_strlen2(s + 1);
	}
	return 0;
}

//��дһ������ ����������ʱ���� ���ַ����ĳ���
int main()
{
	char arr[] = "abcdef";//����Ϊ 6
	int len1 = 0,len2 = 0;

	len1 = my_strlen1(arr);
	printf("%d\n", len1);

	len2 = my_strlen2(arr);
	printf("%d\n", len2);
	return 0;
}





//void print(int num)
//{
//	//��������  �����ǰ�˳���ӡ
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//
////�ݹ�-����һ��������ֵ����˳���ӡ����ÿһλ
//int main()
//{
//	unsigned int num;
//	scanf("%d", &num);
//	print(num);
//	//1234  1234 % 10 = 4  1234 / 10 = 123 
//	return 0;
//}



////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
////�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//
//int main() {
//	int i = 0, j = 0;//��ʾ���� ����
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%.2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//#pragma comment(lib,"test_1_27")
//
//void Swap(int *a,int *b)
//{
//	int temp = *b;
//	*b = *a;
//	*a = temp;
//}
//
//int main() {
//	
//	int a =22, b = 33;
//	Swap(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}