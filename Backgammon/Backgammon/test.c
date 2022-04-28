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
	//初始化
	InitBoard(board, ROW, COL);
	//打印棋盘
	PrintBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		//判断输赢
		ret = DecideBoard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		PrintBoard(board, ROW, COL);

		//电脑下棋
		ComputerMove(board, ROW, COL);
		//判断输赢
		ret = DecideBoard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		PrintBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
		PrintBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
		PrintBoard(board, ROW, COL);
	}
	else
	{
		printf("平局了\n");
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
		printf("请选择你的选项:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏.\n");
			break;
		default:
			printf("输入错误,请重新输入.\n");
			break;
		}

	} while (input);
	
}