#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

void manu()
{
	printf("**********************************\n");
	printf("**********   1.开始游戏   ********\n");
	printf("**********   0.退出游戏   ********\n");
	printf("**********************************\n");
}


void game()
{
	int rum = 0;
	int k = rand() % 1000;
	printf("请输入要猜的数:>\n");

	while (1)
	{
		scanf("%d", &rum);
		if (rum == k)
		{
			printf("猜对啦,k的值就是%d\n", rum);
			break;
		}
		else if (rum > k)
		{
			printf("猜大了!请重新输入:>\n");
			continue;
		}
		else
		{
			printf("猜小了!请重新输入:>\n");
			continue;
		}
	}
}


int main()
{
	int k = 0;
	int input = 0;

	do
	{
		manu();
		srand((int*)time(NULL));
		
		scanf("%d", &input);
		
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default :
				printf("输入错误,请重新输入:>\n");
				break;
		}
			

	} while (input); 


	return 0;
}

