#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//struct information //  结构体变量 
//{
//	char name[20];
//	int age;
//	float height;
//	char sex[4];
//};
// 


struct student
{
	char name[15];
	char sex[5];
	int age;
	float height;
};

int main()
{
	struct student s1 = { "张三" , "男" , 18 , 1.70 };
	 
	struct student* pa = &s1;
	*pa;
	
	//指向操作符  指针变量 pa->（定义的名字）
	printf("%s %s %d %.2f\n",pa->name,pa->sex,pa->age,pa->height );










	//int a = 1;
	//
	//int* pa = &a;
	//printf("%p\n", &a);

	//*pa = 2;
	//printf("%d\n", a);

	//struct information i1 = { "张三", 18 , 1.78 , "男" };
	//// . 引用操作符
	//printf("姓名：%s 年龄：%d 身高：%.2f 性别：%s\n", i1.name, i1.age, i1.height, i1.sex); 
	//
	//															 
	//struct information* pa = &i1;// pa 即为指针变量
	//// 解引用 *pa  就是原本的 i1  *pa = il
	//printf("姓名：%s 年龄：%d 身高：%.2f 性别：%s\n", (*pa).name, (*pa).age, (*pa).height, (*pa).sex);
	//// 这两种表达方式都是一样的
	//
	////指向操作符  ->
	//printf("姓名：%s 年龄：%d 身高：%.2f 性别：%s\n", pa->name, pa->age, pa->height, pa->sex);
	
	
	return 0;
}
