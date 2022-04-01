#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Chushihuabroad(char broad[ROW][COL], int row, int col)
{
		int i = 0;
		int j = 0;
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				broad[i][j] = ' ';
			}
		}
}

void Displaybroad(char broad[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{	
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", broad[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}

		printf("\n");
		
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		
	}
}

void PlayerMove(char broad[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	
	while (1)
	{
		printf("请输入要走的坐标:>\n");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (broad[x - 1][y - 1] == ' ')
			{
				broad[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("该坐标非法,请重新输入!\n");
		}
	}
}

void ComputerMove(char broad[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("电脑走:>\n");

	while (1)
	{
		if (broad[1][1] == ' ')
		{
			broad[1][1] = '#';
			break;
		}

		 x = rand() % row;
		 y = rand() % col;

		if (broad[x][y] == ' ')
		{
			broad[x][y] = '#';
			break;
		}
	}
}

int Isfull(char broad[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (broad[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char Iswin(char broad[ROW][COL], int row, int col)
{
	int i = 0;
	//三横
	for (i = 0; i < row; i++)
	{
		if (broad[i][0] == broad[i][1] && broad[i][1] == broad[i][2] && broad[i][1] != ' ')
		{
			return broad[i][1];
		}
	}
		
	//三竖
	for (i = 0; i < col; i++)
	{
		if (broad[0][i] == broad[1][i] && broad[1][i] == broad[2][i] && broad[i][1] != ' ')
		{
			return broad[1][i];
		}

	}

	//斜杠
		if (broad[0][0] == broad[1][1] && broad [1][1] == broad[2][2] && broad[1][1] != ' ')
		{
			return broad[1][1];
		}

		 if (broad[0][2] == broad[1][1] && broad[1][1] == broad[2][0] && broad[1][1] != ' ')
		{
			return broad[1][1];
		}

		if(1 == Isfull(broad, ROW, COL))
		{
			return 'O';
		}
		
		return 'C';
}
