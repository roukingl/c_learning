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

	//初始化数组
	ChushihuaBroad(lei, ROWS, COLS, '0');
	ChushihuaBroad(show, ROWS, COLS, '*');

	//打印
	//DisplayBroad(lei, ROW, COL);
	DisplayBroad(show, ROW, COL);

	//布置雷
	InitBroad(lei, ROW, COL);

	//排查雷
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
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误, 请重新选择\n");
				break;
		}

	} while (input);
	return 0;
}
