#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void manu()
{
	printf("**********************************\n");
	printf("******      1.��ʼ��Ϸ      ******\n");
	printf("******      0.�˳���Ϸ      ******\n");
	printf("**********************************\n");
}


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//��ʼ��
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');

	//������
	LayoutBoard(mine, ROW, COL);

	//��ӡ
	DelayBoard(show, ROW, COL);
	DelayBoard(mine, ROW, COL);

	//�Ų���
	CheckBoard(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{	
		manu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}
