#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 3 // ��ʼͨѶ¼��С
#define MAX_ADD 2 // ����һ��ͨѶ¼���ݵĴ�С

#define MAX_NAME 20 // ����
#define MAX_SEX 5 // �Ա�
#define MAX_PHONE 12 // �绰
#define MAX_RESIDENCE 20 // ��ַ

typedef struct people
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char phone[MAX_PHONE];
	char residence[MAX_RESIDENCE];
}people;//һ���˵���Ϣ


typedef struct contact
{
	people* data;//ָ���Ǹ��˵���Ϣ
	int sz; // ĿǰͨѶ¼������ϵ�˸���
	int capacity; // ĿǰͨѶ¼�������
}contact;//ͨѶ¼

//��ʼ��ͨѶ¼
void InitContact(contact* pc);

//������ϵ��
void AddContact(contact* pc);

//ɾ����ϵ��
void DeleteContact(contact* pc);

//����
int Find(const contact* pc);

//�޸���ϵ��
void ReviseContact(contact* pc);

//����ͨѶ¼
void FindContact(const contact* pc);

//��ӡ��ϵ��
void DalayContact(int ret, const contact* pc);

//��ӡͨѶ¼
void PrintContact(const contact* pc);

//��ӡ
void Print(const contact* pc, int n);

//����
void Scan(contact* pc, int n);

//����
void CheckCapacity(contact* pc);

