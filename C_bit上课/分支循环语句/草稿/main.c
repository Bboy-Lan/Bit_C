#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct information //  结构体变量 
{
	char name[20];
	int age;
	float height;
	char sex[4];
};
int main()
{

	struct information i1 = { "张三", 18 , 1.78 , "男" };
	// . 引用操作符
	printf("姓名：%s 年龄：%d 身高：%.2f 性别：%s\n", i1.name, i1.age, i1.height, i1.sex); 
	
																 
	struct information* pa = &i1;// pa 即为指针变量
	// 解引用 *pa  就是原本的 i1  *pa = il
	printf("姓名：%s 年龄：%d 身高：%.2f 性别：%s\n", (*pa).name, (*pa).age, (*pa).height, (*pa).sex);
	// 这两种表达方式都是一样的
	
	//指向操作符  ->
	printf("姓名：%s 年龄：%d 身高：%.2f 性别：%s\n", pa->name, pa->age, pa->height, pa->sex);
	
	
	return 0;
}
