#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int a = 1;//ȫ�ֱ���
extern int Max;
#define MAX 10//ע���ʽ

enum Stage//��ʽ����д
{
	prime,
	middle,
	senior
	
};

int cmp(int a, int b)//�����ҹ���д�Ķ��� a b �����ǲ�һ����  һ����ȫ�ֱ���һ���Ǿֲ�����, MaxҲ�� �����ǰ��������� �������֪ʶ �Լ�����
{
	if (a >= b)
		return a;
	else(a < b);
		return b;
}
int main()
{
	int a, b, Max;
	scanf("%d %d", &a, &b);
	Max= cmp(a, b);
	printf("Max=%d\n",Max);
	
	
	
	
	
	int i = 9;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//�����ӡ��������
	while (i >= 0)//while()�����������ݲ�ִ��
	{
		printf("%d\n", arr[i]);
		i--;
	}
	

	int sum = 0;
	printf("��ʼѧϰ��\n");
	
	while (sum <20000)
	{
		printf("sum=%d ��������\n",sum);
		sum++;
	}
	
	
	printf("һ�ݺ�offer");
	
	
	/*
	printf("%d\n", prime);
	printf("%d\n", middle);
	printf("%d\n", senior);
	int arr[senior] = {0};*/


	/*int arr[MAX] = {0};
	MAX = 5;
	printf("%d\n", MAX);*/


	int a = 5;
	int b = a << 1;//���Ʋ�����
	printf("%d\n", b);
	 //5�Ķ�����  �������õ�ǰ��֪ʶ  a �� int��  1byte =8bit
	 //��a�Ķ����Ʊ��� 32λ a=5=2^2+2^0
	//00000000 00000000 00000000 00000101
	//���Ʋ����� ������Ƴ�ȥһ�� ���ұ���0����  ���Ʋ������෴
	//00000000 00000000 00000000 00001010
	// ����Ϊ10�������� 
	//2^3+2^1=10




	/*printf("C:\\168\\test_lan\\bboy.txt");*/


	char ch1[] = "abcdefg";//7���ַ�
	char ch2[] = { 'a','b','c','d','e','f','g','\0'};//ע�ⲻ��'/0'
	printf("%s\n", ch1);
	printf("%s\n", ch2);

	printf("%d\n", strlen(ch1));
	printf("%d\n", strlen(ch2));
	//strlen �����ַ����ĳ��� �ɼ����ַ�����










	//��������Ҫ��ӡһ�� ��(������) ��ʱ�� 
	int ch1[] = {'\''};
	printf("%c\n",ch1);
	//��������Ҫ��ӡһ��˫���ŵ�ʱ��
	int ch2[] = { '\''};
	printf("%c\n",ch2);










	char ch[] = "��ã�";
	printf("hello_world\n");
	char ch1[] = { 'a','a','c' };
	printf("%s\n", ch1);



	int address[] = { 1,2,3,4,5,6,7,8,9,10 };
	//�����±���   0,1,2,3,4,5,6,7,8,9 �±������Ԫ�ظ�����1
	int address[] = { 1,7,8,6,4,5,8};//����һ�� ����Ԫ����������������� �������±꿴����Ԫ�ظ��� ����Ԫ������



	int address[] = {1,2,3,4,5,6,7,8,9,10};
	//���������ֵ����ɲ��� �����������һ���ǳ�����������������涨���������������װԪ�صĴ�С
	int address[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//ע���ʽ ��������+����+[]={����} ���ݵ�����Ҳ�Ǻ������������Ӧ
	
	char ch1[] = { 'a','a','c' };//�ַ�
	char ch2[20] = { 'a','a','c' };
	//���Կ��� [] �������ֻ�ܱȺ���{}�����Ԫ�ض� һ�����˾ͻ�װ���±���
	char ch3[] = "��ã�";//�ַ���




	printf("Max=%d\n", Max);
	int a = 10;//�ֲ�����
	printf("a = %d\n", a);
	�����ʱ �������������ֲ�������10 ������a=1
	
			  
			  
	 int ������
	 short ������
	 long ������
	long long ������  
	float �����ȸ�����
	double ˫���ȸ�����
	/*
	���� ��ͬ����ϵͳ��long long �Ĵ�С������в���
	���� longlong ����long��
	*/

	�� sizeof()��������ռ�ֽ�
	/*printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));*/

	





	return 0;
}
