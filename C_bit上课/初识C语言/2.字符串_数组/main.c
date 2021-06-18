#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<stdio.h>

extern int a;// extern 
//引用 所定义的全局变量 测试全局变量作用域在整个工程内有效


#define PAI 3

enum Sex  // enum 枚举法定义的常量 像数组一样从0开始
	{
		Male,//0
		Female,//1
		Secret//2

	};

int main()
{


	//局部、全局变量作用域  局部变量作用于所在可行域 {}内 而全局变量作用于整个项目
	printf("%d\n",a);


	                     //移位操作符
	int a=5;
	int b=a<<1;// <<向左移位   >>向右移位 原理一致
	printf("%d\n",b);
	
	//5 的二进制代码 整形 4个字节 32 个bit位
	// 00000000 00000000 00000000 00000101
	//左移一位 左边顶出去一个  右边用0补充
	//00000000 00000000 00000000 00001010
	// 转换成 10进制 
	//2^3+2^1 = 10

		              

	                              //常量
	

	printf("%d\n",Female);// 结果为1

	
	const int a=10;
	int arr[a]={0,1,2};//  常变量 这里表示 a已经不是常量 

	
	int arr[PAI]={0,1,2};//这里 说明#define 定义的是常量
	printf("%d\n",arr[1]);
	
	
	

			                     //字符串
	

	char ch1[]={'a','b','c'};
	char ch2[]="你是猪";
	char ch3[]={'a','b','\0'};

	printf("%s\n",ch1);
	printf("%s\n",ch2);
	printf("%s\n",ch3);


	char ch1[]="abcdefg";
	//字符串最后自带 "\0" 结束标志 因此最后无需添加就能结束
	printf("%d\n",strlen(ch1));


	char ch[]={'a','b'};
	printf("%d\n",strlen(ch));
	//这里可以看出 求出的数组长度不是对的 是一个随机数 因此我们需要加一个结束标志"\0" 而且\0 不算做长度一部分


	
	printf("%d\n",strlen("c:\code\test.c"));//12
	printf("%d\n",strlen("c:\tesktop\198\128.txt"));//18

	//这里注意 各种转义字符 数数的时候注意一点




	                        //数组



	int arr[11]={0,1,2,3,4,5,6,7,8,9,10};
	// 定义 数组[] 里面的值 可以写也可以不写 视情况而定 且 {}后面加分号;
	
	int i=0;
	// 注意 while()的使用  满足括号里面的内容就能进行{ } 里面的代码
	
	while(i<11)//正序输出 数组值
	{
		printf("%d ",arr[i]);
		i++;
	}
	
	i=10;
	printf("\n");//倒序输出 数组值
	
	while(i>=0)
	{
		printf("%d ",arr[i]);
		i--;
	}



	system("pause");
	return 0;
}
