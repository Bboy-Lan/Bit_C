#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int g_val = 100;
// ���ļ��� ȫ�ֱ��� ע������



	//�ṹ��
struct student {
	char name[20];
	int age;
	char sex[5];
	char id[10];
};
int main() {
	struct student s1 = {"����",18,"��","3834015"};
	printf("%s\n",s1.name);
	printf("%s\n",s1.id);

	//ע�� �ṹ������ִ�ӡ��ʽ һ�ֵ�ַ һ������ һ�ֽ�����
	struct student *pa = &s1;
	printf("���֣�%s ���䣺%d �Ա�%s ѧ�ţ�%s\n", pa->name, pa->age, pa->sex, pa->id);
	printf("���֣�%s ���䣺%d �Ա�%s ѧ�ţ�%s\n", (*pa).name, (*pa).age, (*pa).sex, (*pa).id);
	return 0;
}

//int main() {
//	int a = 10;
//	char b = 'w';
//	printf("%p\n", &a);
//	char* pb = &b;
//	int* pa = &a;//ָ�����
//	*pa = 20;
//	printf("%d\n", a);//������
//	printf("%d\n", sizeof(pb));
//	return 0;
//}

