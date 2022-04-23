#define  _CRT_SECURE_NO_WARNINGS 1

#include "main.h"


//递归方式实现打印一个整数的每一位

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}