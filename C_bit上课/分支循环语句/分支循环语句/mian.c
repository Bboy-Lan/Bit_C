#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{



	int ch;
	while ((ch = getchar()) != EOF)//ֱ������Ctrl+z����
	{

		if (ch < '0' || ch > '9')//�߼���  ����һ��������ִ�� 
		{
			continue;// ����˼�� ֻҪ���� 0-9 ��Χ�ڵ��ַ�  �ͼ���ѭ��ִ��
		}
		putchar(ch);//���� if ���� ������������� �������� ���൱����Զִ�в���

	}





	int ch = 0;//Ϊʲô���������� int 
	while ((ch = getchar()) != EOF)// EOF ����ֵ -1  ��getchar������ȡʧ��ʱ ����EOF -1  �����Ͻ� �����ϵ��ַ�����ʮ���������� ����� int 
	{
		putchar(ch);
	}


	//switch case ���Ӧ��

	int n = 5;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("����ָ������!");
		break;


	}

	// ���� д break ��ϰ��  ע��һ�� switch��ʽ




	//�ж� 1-100 ֮�� ������

	int i;
	for (i = 1; i <= 100; i++)// for ѭ���ĵط� ������while ��� ֻ�����׼���︴�ӳ̶Ȳ�ͬ
	{
		if (i % 2 != 0)
			printf("%d ", i);
	}



	return 0;
}