#include"game.h"

//�����Ϸ��������
void game()
{
	//���̶�ά����
	char board[ROW][COL];
	int ret = 0;

	//��ʼ������
	InitBoard(board, ROW, COL);

	//��ӡ����
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//����ƶ�
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')//������ټ���������ѭ��  ��Ϊ�Ѿ��н����
		{
			break;
		}

		//�����ƶ�
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}//ѭ������λ��

		if (ret == '#')
		{
			printf("����Ӯ�ˣ�\n");
		}
		else if (ret == '*')
		{
			printf("���Ӯ�ˣ�\n");
		}
		else
		{
			printf("ƽ�֣�\n");
		}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//�˵�����
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("��Ϸ������\n");
			break;
		case 1:
			printf("----------��������Ϸ-----------\n");
			game();
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (input);
	return 0;
}