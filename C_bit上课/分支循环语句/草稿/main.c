#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct information //  �ṹ����� 
{
	char name[20];
	int age;
	float height;
	char sex[4];
};
int main()
{

	struct information i1 = { "����", 18 , 1.78 , "��" };
	// . ���ò�����
	printf("������%s ���䣺%d ��ߣ�%.2f �Ա�%s\n", i1.name, i1.age, i1.height, i1.sex); 
	
																 
	struct information* pa = &i1;// pa ��Ϊָ�����
	// ������ *pa  ����ԭ���� i1  *pa = il
	printf("������%s ���䣺%d ��ߣ�%.2f �Ա�%s\n", (*pa).name, (*pa).age, (*pa).height, (*pa).sex);
	// �����ֱ�﷽ʽ����һ����
	
	//ָ�������  ->
	printf("������%s ���䣺%d ��ߣ�%.2f �Ա�%s\n", pa->name, pa->age, pa->height, pa->sex);
	
	
	return 0;
}
