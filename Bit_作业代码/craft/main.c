#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

extern int MAX;

int main()
{


	//�ж�һ�������Ƿ���5����  
	//����  ����һ������M��1��M��100, 000��
	//���  ����һ�У����M���Ա�5���������YES���������NO�������Сд���У�
	int M = 0;
	scanf("%d", &M);
	if (M % 5 == 0)//�ܱ�5���� ˵�����ȡ������Ϊ 0   % Ϊȡ������Ҳ��Ϊȡģ��
		printf("YES");
	else
		printf("No");

	





	//printf("%d\n", strlen("C:\168\tasks\bboy.txt"));
	//strlen�����ַ����ĳ��� Ӧ�����ֽ�


	//char ch1[] = { "abcdefg" };
	//char ch2[] = { 'a','b','c','d','e','f','g'};

	//printf("%s\n", ch1);
	//printf("%s\n", ch2);

	//printf("ch1= %d\n", strlen(ch1));
	//printf("ch2= %d\n", strlen(ch2));






	////����Ҫ��ӡһ��������ʱ
	//char arr1[] = {'\''};
	//printf("%s\n",arr1);
	//
	////����Ҫ��ӡһ��˫����ʱ
	//char arr2[] = {"\""};
	//printf("%s\n",arr2);



	//int arr[10];
	//printf("%c\n", 90);
	//printf("%d\n",'Z');
	
	return 0;

}