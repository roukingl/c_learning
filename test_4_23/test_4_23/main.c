#define  _CRT_SECURE_NO_WARNINGS 1

#include "main.h"


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}