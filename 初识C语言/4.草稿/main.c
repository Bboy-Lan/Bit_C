#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void test()
{
	static int a = 1;
	a += 1;
	printf("%d ", a);
}
typedef unsigned int uint;





#define Max(x,y) (x>y ? x : y)//����ע���ʽ 
int main()
{
	int a = 1;
	int b = 2;
	int c = Max(a, b);
	printf("%d\n", c);




	/*int a = 1;
	int b = 2;
	int c=Add(a, b);
	printf("%d\n", c);
*/



	/*int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	*/
	
	
	
	/*uint b = 10;
	printf("%d\n", b);*/

	//int int = 0;

	////�������ò�����
	//int a, b;
	//printf("hello world!\n");
	//Add(a, b);

	//test();





	//���ű��ʽ
	//���ű��ʽ �������ҿ�ʼ���м���
	// �����������������һ��ʽ�ӵ�ֵ
	//int a = 5,b=4,c=3;
	//int d = (a = b + 5, b = a - 6 , c = b + a, c -= 1);
	//// a=9  b=3  c=12 c=11  d=11
	//printf("%d\n", d);


	////����������
	//int a = 5;
	//int b;
	//if (a == 5)
	//{
	//	b = 6;
	//}
	//else
	//{
	//	b = -6;
	//}
	//b = (a == 5) ? 6 : -6;
	//printf("%d\n", b);
	//	/*a = 5 ? printf("���\n") : printf("�Ҳ���\n");*/

	 
	 
	//�߼�������
	// &&�߼���   || �߼���
	/*int a = 1,b=2;
	if (a == 1 || b == 1)
	{
		printf("hello\n");
	}
	else
	{
		printf("������\n");
	}*/

	//int a = (int)3.14;

	//printf("%d\n", a);


	////����++
	//int a = 1;
	//a++;
	//printf("%d\n", a);//-- ��ͬ


	//ǰ�ú��� ++ --
	//ǰ��++ 

	//ǰ�� --
	//int a = 1;
	//int c = --a;//a�� c��ʹ��
	//printf("%d\n",a);//a=0 c=0
	//printf("%d\n", c);


	/*int a = 0;
	printf("%d\n", ~a);*/

	//
	//// + - ������˼
	//int a = 1;
	//int b = +a;
	//int c = -a;


	
	////��Ŀ����������ֻ���һ������
	////��˫Ŀ����������������� �� + - = ������������
	////ͬ�� ��Ŀ����������������� 
	//int a = 1;
	////��C�������� ͨ�� 0��ʾ�� 1��ʾ��
	//printf("%d\n", !a);
	//if (a)//a���� ����
	//{

	//}
	//if (!a)//a������ ����
	//{

	//}









	//int a = 10;

	//a = a + 3;
	//a += 3;//����д��

	//a = a & 3;//��λ��
	//a &= 3;//����д��

	//a = a << 3;
	//a <<= 3;//����д��




	////��ӡ����ĸA
	//printf("%c\n", 65);
	////����ӡ A��ANCII��ֵ

	//printf("%d\n",'A');


	////system("pause");
	return 0;

}