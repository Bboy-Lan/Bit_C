#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>





#include<stdio.h>


//struct sortsjavascript:void(0);
//{

//};
int test(int input)
{
	if (0 <= input <= 5)
	{
		return 4;
	}
	else
	{
		if (input == 6)
			return 3;
		else if (input == 7)
			return 2;
		else if (input == 8)
			return 1;
		else if (input == 9)
			return 0;
	}
}
int main()
{
	//����ĿӦ������Ҫ�ṹ�嶨��  ������
	int input;
	scanf("%d", &input);
	char ch[6] = { 'A','B','C','D','E','F' };
	int plus = input / 10;
	printf("%c", test(input));


	return 0;
}










//void test()
//{
//	static int a = 1;
//	a += 1;
//	printf("%d ", a);
//}
//typedef unsigned int uint;

//int main()
//{

	//int input;
	//scanf("%d", &input);
	//int ch[6] = { 65,66,67,68,69,70 };
	//int plus = input / 10;
	//int n = plus - 1;
	//int a = ch[n];
	//printf("%c", a);

	//���֪ʶ


	//struct sorts
	//{

	//};


	////int input;
	//scanf("%d", &input);
	//while (0 <= input <= 100)
	//{
	//	if (90 <= input && input <= 100)
	//	{
	//		printf("A");
	//		break;
	//	}
	//	if (80 <= input && input <= 89)
	//	{
	//		printf("B");
	//		break;
	//	}
	//	if (70 <= input && input <= 79)
	//	{
	//		printf("C");
	//		break;
	//	}
	//	if (60 <= input && input <= 69)
	//	{
	//		printf("D");
	//		break;
	//	}
	//	if (input <= 59)
	//	{
	//		printf("E");
	//		break;
	//	}

	//}
	//if (100 < input || input < 0)
	//{
	//	printf("F");
	//}



	


	//int input;
	//scanf("%d", &input);
	//while (0 <= input <= 100)
	//{
	//	if (90 <= input && input <= 100)
	//	{
	//		printf("A");
	//	}
	//	if (80 <= input && input <= 89)
	//	{
	//		printf("B");
	//	}
	//	if (70 <= input && input <= 79)
	//	{
	//		printf("C");
	//	}
	//	if (60 <= input && input <= 69)
	//	{
	//		printf("D");
	//	}
	//	if (input <= 59)
	//	{
	//		printf("E");
	//	}

	//}
	//if (100 < input || input < 0)
	//{
	//	printf("F");
	//}

	return 0;

	//int a = 10;
	//char* pa = &a;
	//*pa = 20;
	//printf("%p\n", a);
	//printf("%p\n", pa);
	//printf("%p\n", *pa);








	//int a = 1;
	//int b = 2;
	//int c = Max(a, b);
	//printf("%d\n", c);




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
//	return 0;
//
//}