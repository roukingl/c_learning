#define  _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void manu()
{
	printf("************************************\n");
	printf("*****     1.增加      2.删除     ***\n");
	printf("*****     3.修改      4.查找     ***\n");
	printf("*****     5.排序      6.打印      ***\n");
	printf("*****           0.退出           ***\n");
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
	contact con;//创建通讯录

	//初始化
	InitContact(&con);

	do
	{
		manu();
		printf("请输入需要进行的操作\n");
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
			printf("输入错误请重新输入\n");
			break;
		}

	} while (input);
}
