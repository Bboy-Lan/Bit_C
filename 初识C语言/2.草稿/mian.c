#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main()
{
	// int 整数型
	// short 短整型
	// long 长整型
	//long long 长整型  
	//float 单精度浮点型
	//double 双精度浮点型
	/*
	这里 不同操作系统中long long 的大小或许会有差异
	但是 longlong 都比long大
	*/
	
	//用 sizeof()求类型所占字节
	printf("%d\n", sizeof(int)); 
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));


	

			
	
	return 0;
}
