#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*********************************\n");
	printf("******     1.开始游戏     *******\n");
	printf("******     0.退出游戏     *******\n");
	printf("*********************************\n");
}

void game()
{
	char ret = 0;

	char broad[ROW][COL] = { 0 };//创建一个数组
	//初始化数组
	Chushihuabroad(broad, ROW, COL);
	//打印棋盘
	Displaybroad(broad, ROW, COL);
	
	//下棋											
	while (1)
	{											
		//玩家走
		PlayerMove(broad, ROW, COL);				//玩家赢      *
		Displaybroad(broad, ROW, COL);				//电脑赢      #			 
		//判断玩家是否赢							 //平局        O
		ret = Iswin(broad, ROW, COL);				//正在对局    C
		if (ret != 'C')
		{
			break;
		}
		
		//电脑走	
		ComputerMove(broad, ROW, COL);
		Displaybroad(broad, ROW, COL);
		//判断电脑是否赢
		ret = Iswin(broad, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢");
	}
	else if (ret == '#')
	{
		printf("电脑赢");
	}
	else
	{
		printf("平局");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择一个选项:>");
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
			printf("输入错误,请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}