#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*********************************\n");
	printf("******     1.��ʼ��Ϸ     *******\n");
	printf("******     0.�˳���Ϸ     *******\n");
	printf("*********************************\n");
}

void game()
{
	char ret = 0;

	char broad[ROW][COL] = { 0 };//����һ������
	//��ʼ������
	Chushihuabroad(broad, ROW, COL);
	//��ӡ����
	Displaybroad(broad, ROW, COL);
	
	//����											
	while (1)
	{											
		//�����
		PlayerMove(broad, ROW, COL);				//���Ӯ      *
		Displaybroad(broad, ROW, COL);				//����Ӯ      #			 
		//�ж�����Ƿ�Ӯ							 //ƽ��        O
		ret = Iswin(broad, ROW, COL);				//���ڶԾ�    C
		if (ret != 'C')
		{
			break;
		}
		
		//������	
		ComputerMove(broad, ROW, COL);
		Displaybroad(broad, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = Iswin(broad, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ");
	}
	else if (ret == '#')
	{
		printf("����Ӯ");
	}
	else
	{
		printf("ƽ��");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��һ��ѡ��:>");
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
			printf("�������,����������\n");
			break;
		}
	} while (input);
	return 0;
}