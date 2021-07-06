#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct information
{
	char name[20];
	int age;
	float height;
	char sex[4];
};
int main()
{

	struct information i1 = { "ÕÅÈý",18,1.78,"ÄÐ" };
	printf("%s %d %.2f %s", i1.name, i1.age, i1.height, i1.sex);

	return 0;
}
