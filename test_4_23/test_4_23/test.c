#define  _CRT_SECURE_NO_WARNINGS 1

//
//#include "main.h"
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	print(n);
//
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//#include <stdio.h>
//
//int Fac(int n)
//{
//	int i = 1;
//	int sum = 1;
//	while (i <= n)
//	{
//		sum = sum * i;
//		i++;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int Fac(int n)
//{
//	while (n >= 2)
//	{
//		return n * Fac(n - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//递归和非递归分别实现strlen

//递归
//
//int my_strlen(char* parr)
//{
//	if (*parr != '\0')
//	{
//		return 1 + my_strlen(parr + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = { 0 };
//	gets(arr);
//
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//
//	return 0;
//}

//
////非递归
//
//#include <stdio.h>
//
//int my_strlen(char* parr)
//{
//	int count = 0;
//	while (*parr != '\0')
//	{
//		count++;
//		parr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { 0 };
//	gets(arr);
//
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//编写一个函数 reverse_string(char* string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba

//
//#include <stdio.h>
//
//void reverse_string(char* string, int right)
//{
//	char tmp = 0;
//	if (string + right >= string)
//	{ 
//		tmp = *string;
//		*string = *(string + right);
//		*(string + right) = tmp;
//
//		reverse_string(string + 1, right - 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	gets(arr);
//
//	int ret = sizeof(arr) / sizeof(arr[0]) - 1;
//	reverse_string(arr, ret - 1);
//
//	puts(arr);
//
//	return 0;
//}
//
//
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//
//#include <stdio.h>
//
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n % 10;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现

//#include <stdio.h>
//
//int my_pow(int n, int k)
//{
//	if (k >= 1)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//
//	int ret = my_pow(n, k);
//	printf("%d\n", ret);
//
//	return 0;
//}

//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1

////递归
//#include <stdio.h>
//
//int Fib(unsigned int n)
//{
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//
//	int ret = Fib(n);
//	printf("%u\n", ret);
//
//	return 0;
//}


//非递归

#include <stdio.h>

int Fib(unsigned int n)
{
	int a = 1;
	int b = 1;
	int c = 0;

	if (n == 1 || n == 2)
	{
		return 1;
	}

	while (n - 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	
	return c;
}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);

	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}