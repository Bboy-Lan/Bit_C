#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int MAX(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}
int main()
{
	
	//����
		//�ж�һ�������Ƿ���5������һ��ͦ�򵥵����⣬�����KiKi���ǲ����Լ����������ҵ������д����

		//����������
		//�������һ������M��1��M��100, 000��
		
		//���������
		//�������һ�У����M���Ա�5���������YES���������NO�������Сд���У�
	
	
	int M;
	scanf("%d", &M);
	if (M % 5 == 0)
		printf("YES");
	else
		printf("NO");
	
	
	
	

	
	//дһ�����������������Ľϴ�ֵ

		//���룺10 20

		//����ϴ�ֵ��20
	int a , b;
	scanf("%d%d", &a, &b);
	
	printf("%d\n", MAX(a, b));

	
	return 0;

}