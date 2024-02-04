#include"game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');//ע��˴��Ĵ���  ROWS COLS
	InitBoard(show, ROWS, COLS, '*');
	
	////��ӡ����
	//DisplayBoard(mine, ROW, COL);
	//printf("\n");
	//DisplayBoard(show, ROW, COL);
	
	//����ը��
	printf("\n");
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//̽��ը��
	printf("\n");
	FindMine(mine,show, ROW, COL);
	//ע�⴫�� ��������  mine �������Ų���Ϣ  show �����м�¼
	//DisplayBoard(show, ROW, COL);

}	

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		//��ӡ�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("��Ϸ������\n");
			break;
		case 1:
			printf("\n");
			printf("-----------��Ϸ��ʼ-----------\n");
			//��Ϸ���庯��
			game();
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}