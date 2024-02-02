#include"game.h"

//��Ϸ���庯��
void game()
{
	char ret;
	char board[ROW][COL];//������������
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//�ƶ�һ�δ�ӡһ�� �۲�Ч��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("��һ�ʤ��\n");
	else if(ret == '#')
		printf("���Ի�ʤ��\n");
	else
		printf("ƽ�֣�\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		//��ӡ�˵� 
		menu();
		printf("\n��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0 :
			printf("��Ϸ������\n");
			break;
		case 1:
			printf("��Ϸ��ʼ��\n");
			game();//��Ϸ����
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}