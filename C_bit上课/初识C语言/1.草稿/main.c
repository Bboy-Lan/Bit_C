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


	//char *a= "你个猪";
	//printf("%c\n",100);
	//printf("%s\n",a);
	//printf("%d\n",100);//ANCII 码值 c、字符 d、数字 s、字符串
	////A-Z 65-90  a-z 97-122

	

	//操作符 sizeof() 取的是 byte 1 byte=8 bit
	printf("%d\n",sizeof(char));//1
	printf("%d\n",sizeof(short));//2
	printf("%d\n",sizeof(int));//4
	printf("%d\n",sizeof(long));//4
	//sizeof 计算的是byte  1 byte = 8 bit
	printf("%d\n",sizeof(long long));//4 或 8
	//有些时候操作系统不一样long  、 long long取出的长度可能不一样 但默认long long更大一点
	printf("%d\n",sizeof(float));//4
	printf("%d\n",sizeof(double));//8
	
	
	//对实际的变量进行分类 尽量贴近显示不要大材小用 short age; 而不是 long age;
	


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
		printf("两个数相等\n");
	}

	

	system("pause");
	return 0;
}
