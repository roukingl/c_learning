#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

void manu()
{
	printf("**********************************\n");
	printf("**********   1.��ʼ��Ϸ   ********\n");
	printf("**********   0.�˳���Ϸ   ********\n");
	printf("**********************************\n");
}


void game()
{
	int rum = 0;
	int k = rand() % 1000;
	printf("������Ҫ�µ���:>\n");

	while (1)
	{
		scanf("%d", &rum);
		if (rum == k)
		{
			printf("�¶���,k��ֵ����%d\n", rum);
			break;
		}
		else if (rum > k)
		{
			printf("�´���!����������:>\n");
			continue;
		}
		else
		{
			printf("��С��!����������:>\n");
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
				printf("�˳���Ϸ\n");
				break;
			default :
				printf("�������,����������:>\n");
				break;
		}
			

	} while (input); 


	return 0;
}

