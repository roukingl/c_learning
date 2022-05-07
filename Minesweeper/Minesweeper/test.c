#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void manu()
{
	printf("**********************************\n");
	printf("******      1.开始游戏      ******\n");
	printf("******      0.退出游戏      ******\n");
	printf("**********************************\n");
}


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');

	//布置雷
	LayoutBoard(mine, ROW, COL);

	//打印
	DelayBoard(show, ROW, COL);
	DelayBoard(mine, ROW, COL);

	//排查雷
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
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}

