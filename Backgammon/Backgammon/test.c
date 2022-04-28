#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void manu()
{
	printf("*********************************\n");
	printf("********      1.play     ********\n");
	printf("********      0.exit     ********\n");
	printf("*********************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ��
	InitBoard(board, ROW, COL);
	//��ӡ����
	PrintBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = DecideBoard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		PrintBoard(board, ROW, COL);

		//��������
		ComputerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = DecideBoard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		PrintBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
		PrintBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
		PrintBoard(board, ROW, COL);
	}
	else
	{
		printf("ƽ����\n");
		PrintBoard(board, ROW, COL);
	}
}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));

	do
	{
		manu();
		printf("��ѡ�����ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ.\n");
			break;
		default:
			printf("�������,����������.\n");
			break;
		}

	} while (input);
	
}