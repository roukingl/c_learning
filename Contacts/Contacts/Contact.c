#define  _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

//��ʼ��
void InitContact(contact* pc)
{
	pc->data = (people*)calloc(MAX, sizeof(people));//Ϊdata���ٿռ�
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
	printf("�������޸ĵ���ϵ�˵�����");
	scanf("%s", pc->data[n].name);
	printf("�������޸ĵ���ϵ�˵��Ա�");
	scanf("%s", pc->data[n].sex);
	printf("�������޸ĵ���ϵ�˵�����");
	scanf("%d", &(pc->data[n].age));
	printf("�������޸ĵ���ϵ�˵ĵ绰");
	scanf("%s", pc->data[n].phone);
	printf("�������޸ĵ���ϵ�˵ĵ�ַ");
	scanf("%s", pc->data[n].residence);
}


//��̬����
//void AddContact(contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼����,�޷����\n");
//		return;
//	}
//	
//	Scan(pc, pc->sz);
//
//	pc->sz++;
//	printf("������ϵ�˳ɹ�\n");
//}


//����
void CheckCapacity(contact* pc)
{
	people* ptr = (people*)realloc(pc->data, sizeof(people) * (pc->capacity + MAX_ADD));
	if (ptr != NULL)
	{
		pc->data = ptr;
		pc->capacity += MAX_ADD;
		printf("���ݳɹ�\n");
	}
	else
	{
		perror("CheckCapacity");
		printf("����ʧ��\n");
		return;
	}
}


//��̬
void AddContact(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		CheckCapacity(pc);
	}

	Scan(pc, pc->sz);

	pc->sz++;
	printf("���ӳɹ�\n");
}

//ɾ��
void DeleteContact(contact* pc)
{
	int i = 0;
	//1.������ϵ��
	if (pc->sz == 0)
	{
		printf("ͨѶ¼��û����ϵ��,����ɾ��\n");
	}

	printf("������Ҫɾ������ϵ����Ϣ:\n");

	int ret = Find(pc); // �����±�
	if (ret == -1)
	{
		printf("Ҫɾ������ϵ�˲�����\n");
		return;
	}
	//2.ɾ��
	for (i = ret; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
 	}

	pc->sz--;
	printf("ɾ���ɹ�\n");
}

//����
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

	return -1;//�Ҳ���
}

//�޸�
void ReviseContact(contact* pc)
{
	printf("������Ҫ�޸ĵ���ϵ����Ϣ:\n");

	int ret = Find(pc);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
		return;
	}
	else
	{
		Scan(pc, ret);
	}
	
}


//������ϵ��
void FindContact(const contact* pc)
{
	printf("������Ҫ���ҵ���ϵ��:");

	int ret = Find(pc);
	if (ret == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
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

//��ӡ
void DalayContact(int ret, const contact* pc)
{
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
	Print(pc, ret);
	printf("\n");
}


//��ӡͨѶ¼
void PrintContact(const contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
	for (i = 0; i < pc->sz; i++)
	{
		Print(pc, i);
		printf("\n");
	}
}

