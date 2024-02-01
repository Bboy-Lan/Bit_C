#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��������Ϸ����
void game()
{
	char board[ROW][COL];//��������
	//��ʼ������ ��������Ϊ�ո�
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	
	int ret = 0;
	while (1)
	{
		//����ƶ�
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//�ƶ�һ�ξʹ�ӡ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') //�����ַ�C ����Ϸ����
		{
			break;
		}
		//�����ƶ�
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//�ƶ�һ�ξʹ�ӡ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') //ÿ�δ�ӡ֮��Ҫ����ж�
		{
			break;
		}
	}
	if (ret == '*') 
	{
		printf("��һ�ʤ��\n");
		printf("----------------\n");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ��\n");
		printf("----------------\n");
	}
	else
	{
		printf("ƽ�֣�\n");
		printf("----------------\n");

	}
}



//������Ϸ
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));// ���������
	do
	{
		menu();//��ӡ�˵���
		printf("��ѡ�� > ");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
		{
			printf("��Ϸ������\n");
			break;
		}
		case 1:
		{
			printf("--------��������Ϸ---------\n");
			game();//��Ϸ����
			break;
		}
		default:
		{
			printf("�������\n");
			break;
		}
		}
	} while (input);
	return 0;
}