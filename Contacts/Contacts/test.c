#define  _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void manu()
{
	printf("************************************\n");
	printf("*****     1.����      2.ɾ��     ***\n");
	printf("*****     3.�޸�      4.����     ***\n");
	printf("*****     5.����      6.��ӡ      ***\n");
	printf("*****           0.�˳�           ***\n");
	printf("************************************\n");
}

enum
{
	EXIT,
	ADD,
	DELETE,
	REVISE,
	FIND,
	SORT,
	PRINT
};


int PaiXu(const void* e1, const void* e2)
{
	return strcmp((char*)e1, (char*)e2);
}


int main()
{
	int input = 0;
	contact con;//����ͨѶ¼

	//��ʼ��
	InitContact(&con);

	do
	{
		manu();
		printf("��������Ҫ���еĲ���\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DELETE:
			DeleteContact(&con);
			break;
		case REVISE:
			ReviseContact(&con);
			break;
		case FIND:
			FindContact(&con);
			break;
		case SORT:
			qsort(con.data->name, sizeof(con.data->name), sizeof(con.data->name) / sizeof(con.data->name[0]), PaiXu);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);
}
