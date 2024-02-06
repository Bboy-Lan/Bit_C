#include"game.h"

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//��ʼ����������
	InitBoard(mine, ROWS, COLS, '0');//��������
	InitBoard(show, ROWS, COLS, '*');//չʾ����

	//����ը��
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//��ӡ����
	printf("\n");
	DisplayBoard(show, ROW, COL);//ֻ��Ҫ��ӡ 9*9 �Ĳ��ּ���
	
	//�ų�ը��
	printf("\n");
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			printf("-----------ɨ�׿�ʼ----------\n");
			printf("\n");
			game();
			break;
		default:
			printf("��������\n");
			break;
		}
	} while (input);
	return 0;
}