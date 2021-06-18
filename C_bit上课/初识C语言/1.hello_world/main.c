#include<stdio.h>   //用到所需的库函数时需要进行引用
#include<windows.h>


int a=10;//全局变量 不在{ }里面的变量

int main()//main 是程序的入口 一个项目只能有一个
{

	//局部变量 与全局变量冲突时  以局部变量进行的操作优先
	int a=20;
	printf("%d\n",a);

	int b,c;
	int sum;
	scanf("%d%d",&b,&c);
	sum=b+c;
	printf("%d\n",sum);


	system("pause");
	return 0;
}
