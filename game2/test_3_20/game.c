#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void ChushihuaBroad(char broad[ROWS][COLS], int rows, int cols, char tui)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			broad[i][j] = tui;
		}
	}
}


void DisplayBroad(char broad[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", broad[i][j]);
		}
		printf("\n");
	}
}


void InitBroad(char broad[ROW][COL], int row, int col)
{
	int count = EASY_COUNT;

	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (broad[x][y] == '0')
		{
			broad[x][y] = '1';
			count--;
		}
	}
}

static char JisuanBage(char lei[ROW][COL], int x, int y)
{
	return lei[x - 1][y] +
		   lei[x - 1][y - 1] +
		   lei[x][y - 1] +
		   lei[x - 1][y + 1] +
		   lei[x][y + 1] +
		   lei[x + 1][y + 1] +
	       lei[x][y + 1]+
	       lei[x - 1][y + 1] - 7 * '0';
}


void PaichaBroad(char lei[ROW][COL], char show[ROW][COL], int row, int col)
{
	int win = 0;
	int x = 0;
	int y = 0;
	
	while (win < row*col - EASY_COUNT)
	{
		printf("请输入坐标:\n");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y < col)
		{
			if (lei[x][y] == '1')
			{
				printf("很遗憾,你被炸死了\n");
				DisplayBroad(lei, ROW, COL);
				break;
			}
			else
			{
				char ret = JisuanBage(lei, x, y);
				show[x][y] = ret;
				DisplayBroad(show, ROW, COL);
			}
		}
		else
		{
			printf("输入坐标违法,请重新输入\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你,排查出了所有雷\n");
		DisplayBroad(lei, ROW, COL);
	}
}
