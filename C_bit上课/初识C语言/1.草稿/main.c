#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<stdio.h>

int MAX(int num1,int num2)
{
	if(num1<num2)
	{
		return num2;
	}
	else if(num1=num2)
	{
		return -1;
	}
	else
	{
		return num1;
	}

}
int main()
{


	//char *a= "�����";
	//printf("%c\n",100);
	//printf("%s\n",a);
	//printf("%d\n",100);//ANCII ��ֵ c���ַ� d������ s���ַ���
	////A-Z 65-90  a-z 97-122

	

	//������ sizeof() ȡ���� byte 1 byte=8 bit
	printf("%d\n",sizeof(char));//1
	printf("%d\n",sizeof(short));//2
	printf("%d\n",sizeof(int));//4
	printf("%d\n",sizeof(long));//4
	//sizeof �������byte  1 byte = 8 bit
	printf("%d\n",sizeof(long long));//4 �� 8
	//��Щʱ�����ϵͳ��һ��long  �� long longȡ���ĳ��ȿ��ܲ�һ�� ��Ĭ��long long����һ��
	printf("%d\n",sizeof(float));//4
	printf("%d\n",sizeof(double));//8
	
	
	//��ʵ�ʵı������з��� ����������ʾ��Ҫ���С�� short age; ������ long age;
	


	int a=0,b=0;
	int Max=0;
	scanf("%d %d",&a,&b);
	
	Max=MAX(a,b);
	if(Max!=-1)
	{
		printf("Max=%d\n",Max);
	}
	else
	{
		printf("���������\n");
	}

	

	system("pause");
	return 0;
}
