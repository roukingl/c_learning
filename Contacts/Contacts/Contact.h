#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 3 // 初始通讯录大小
#define MAX_ADD 2 // 扩容一次通讯录扩容的大小

#define MAX_NAME 20 // 姓名
#define MAX_SEX 5 // 性别
#define MAX_PHONE 12 // 电话
#define MAX_RESIDENCE 20 // 地址

typedef struct people
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char phone[MAX_PHONE];
	char residence[MAX_RESIDENCE];
}people;//一个人的信息


typedef struct contact
{
	people* data;//指向那个人的信息
	int sz; // 目前通讯录已有联系人个数
	int capacity; // 目前通讯录最大容量
}contact;//通讯录

//初始化通讯录
void InitContact(contact* pc);

//增加联系人
void AddContact(contact* pc);

//删除联系人
void DeleteContact(contact* pc);

//查找
int Find(const contact* pc);

//修改联系人
void ReviseContact(contact* pc);

//查找通讯录
void FindContact(const contact* pc);

//打印联系人
void DalayContact(int ret, const contact* pc);

//打印通讯录
void PrintContact(const contact* pc);

//打印
void Print(const contact* pc, int n);

//输入
void Scan(contact* pc, int n);

//增容
void CheckCapacity(contact* pc);

