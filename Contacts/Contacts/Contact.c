#define  _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

//初始化
void InitContact(contact* pc)
{
	pc->data = (people*)calloc(MAX, sizeof(people));//为data开辟空间
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}
	//
	pc->sz = 0;
	pc->capacity = MAX;
}


void Scan(contact* pc, int n)
{
	printf("请输入修改的联系人的姓名");
	scanf("%s", pc->data[n].name);
	printf("请输入修改的联系人的性别");
	scanf("%s", pc->data[n].sex);
	printf("请输入修改的联系人的年龄");
	scanf("%d", &(pc->data[n].age));
	printf("请输入修改的联系人的电话");
	scanf("%s", pc->data[n].phone);
	printf("请输入修改的联系人的地址");
	scanf("%s", pc->data[n].residence);
}


//静态增加
//void AddContact(contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满,无法添加\n");
//		return;
//	}
//	
//	Scan(pc, pc->sz);
//
//	pc->sz++;
//	printf("增加联系人成功\n");
//}


//增容
void CheckCapacity(contact* pc)
{
	people* ptr = (people*)realloc(pc->data, sizeof(people) * (pc->capacity + MAX_ADD));
	if (ptr != NULL)
	{
		pc->data = ptr;
		pc->capacity += MAX_ADD;
		printf("增容成功\n");
	}
	else
	{
		perror("CheckCapacity");
		printf("增容失败\n");
		return;
	}
}


//动态
void AddContact(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		CheckCapacity(pc);
	}

	Scan(pc, pc->sz);

	pc->sz++;
	printf("增加成功\n");
}

//删除
void DeleteContact(contact* pc)
{
	int i = 0;
	//1.查找联系人
	if (pc->sz == 0)
	{
		printf("通讯录中没有联系人,无需删除\n");
	}

	printf("请输入要删除的联系人信息:\n");

	int ret = Find(pc); // 返回下标
	if (ret == -1)
	{
		printf("要删除的联系人不存在\n");
		return;
	}
	//2.删除
	for (i = ret; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
 	}

	pc->sz--;
	printf("删除成功\n");
}

//查找
static int Find(const contact* pc)
{
	int i = 0;
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);

	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}

	return -1;//找不到
}

//修改
void ReviseContact(contact* pc)
{
	printf("请输入要修改的联系人信息:\n");

	int ret = Find(pc);
	if (ret == -1)
	{
		printf("要修改的联系人不存在\n");
		return;
	}
	else
	{
		Scan(pc, ret);
	}
	
}


//查找联系人
void FindContact(const contact* pc)
{
	printf("请输入要查找的联系人:");

	int ret = Find(pc);
	if (ret == -1)
	{
		printf("要查找的联系人不存在\n");
		return;
	}
	else
	{
		DalayContact(ret, pc);
	}
}


void Print(const contact* pc, int n)
{
	printf("%-20s\t", pc->data[n].name);
	printf("%-5s\t", pc->data[n].sex);
	printf("%-5d\t", pc->data[n].age);
	printf("%-12s\t", pc->data[n].phone);
	printf("%-20s\t", pc->data[n].residence);
}

//打印
void DalayContact(int ret, const contact* pc)
{
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话", "住址");
	Print(pc, ret);
	printf("\n");
}


//打印通讯录
void PrintContact(const contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话", "住址");
	for (i = 0; i < pc->sz; i++)
	{
		Print(pc, i);
		printf("\n");
	}
}

