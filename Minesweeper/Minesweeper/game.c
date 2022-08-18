#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = n;
		}
	}
}


void DelayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf(" ******扫雷游戏******\n ");

	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}


void LayoutBoard(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = MAX_MINE;

	while (count != 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
		}
		else
		{
			continue;
		}
		count--;
	}
}


int CountMine(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1]+
		board[x - 1][y] - 8 * '0';
}


//void UpShow(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	int ret = CountMine(mine, x, y);
//
//	if (ret == 0)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				if (i == j && i == 1 && j == 1)
//				{
//					show[x][y] = ' ';
//				}
//				show[x - i - 1][y - j - 1] = CountMine(mine, x - i - 1, y - i - 1);
//			}
//		}
//
//		for (i = 0; i < 3; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{	
//				if (i == j && j == 1 && i == 1)
//				{
//					continue;
//				}
//				else
//				{
//					if (show[x + i - 1][y + j - 1] == 0)
//					{
//						UpShow(mine, show, x + i - 1, y + j - 1);//x - 1, y - 1
//					}
//					else
//					{
//						return;
//					}
//				}
//			}
//		}
//	}
//}


static void UpShow(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* win)
{
	if (x <= ROW && x >= 1 && y <= COL && y >= 1)
	{
		if (show[x][y] == ' ' || show[x][y] != '*')
		{
			return;
		}
		else if(CountMine(mine, x, y) != 0)
		{
			show[x][y] = CountMine(mine, x, y) + '0';
			(*win)--;
			return;
		}
		else
		{
			show[x][y] = ' ';
			(*win)--;
			int i = 0;
			int j = 0;
			for (i = -1; i <= 1; i++)
			{
				for (j = -1; j <= 1; j++)
				{
					if (j == 1 && i == 1)
					{
						continue;
					}
					UpShow(mine, show, x + i, y + j, win);
				}
			}
		}
	}
}


void CheckBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = row * col - MAX_MINE;

	while (win > 0)
	{
		printf("请输入要查看位置的坐标:>\n");
		scanf("%d %d", &x, &y);

		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了!\n");
				DelayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				if (show[x][y] == '*')
				{
					UpShow(mine, show, x, y, &win);
					DelayBoard(show, ROW, COL);	
				}
				else
				{
					printf("该坐标已查过,请重新选择要查的坐标!\n");
				}
			}
		}
		else
		{
			printf("该坐标不合法,请重新输入!\n");
		}
	}
	if (win == 0)
	{
		printf("恭喜你,你赢下了这局游戏\n");
		DelayBoard(mine, ROW, COL);
	}
}