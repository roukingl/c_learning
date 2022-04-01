#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("******      1.play    ******\n");
	printf("******      0.exit    ******\n");
	printf("****************************\n");
}


void game()
{
	char lei[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//��ʼ������
	ChushihuaBroad(lei, ROWS, COLS, '0');
	ChushihuaBroad(show, ROWS, COLS, '*');

	//��ӡ
	//DisplayBroad(lei, ROW, COL);
	DisplayBroad(show, ROW, COL);

	//������
	InitBroad(lei, ROW, COL);

	//�Ų���
	PaichaBroad(lei, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
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
			printf("ѡ�����, ������ѡ��\n");
				break;
		}

	} while (input);
	return 0;
}
