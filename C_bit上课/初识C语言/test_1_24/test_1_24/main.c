#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int g_val = 100;
// 跨文件的 全局变量 注意申明



	//结构体
struct student {
	char name[20];
	int age;
	char sex[5];
	char id[10];
};
int main() {
	struct student s1 = {"张三",18,"男","3834015"};
	printf("%s\n",s1.name);
	printf("%s\n",s1.id);

	//注意 结构体的三种打印方式 一种地址 一种正常 一种解引用
	struct student *pa = &s1;
	printf("名字：%s 年龄：%d 性别：%s 学号：%s\n", pa->name, pa->age, pa->sex, pa->id);
	printf("名字：%s 年龄：%d 性别：%s 学号：%s\n", (*pa).name, (*pa).age, (*pa).sex, (*pa).id);
	return 0;
}

//int main() {
//	int a = 10;
//	char b = 'w';
//	printf("%p\n", &a);
//	char* pb = &b;
//	int* pa = &a;//指针变量
//	*pa = 20;
//	printf("%d\n", a);//解引用
//	printf("%d\n", sizeof(pb));
//	return 0;
//}

