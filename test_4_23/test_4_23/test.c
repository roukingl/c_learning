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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

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

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//�ݹ�
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
////�ǵݹ�
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
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba

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
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

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


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

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

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1

////�ݹ�
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


//�ǵݹ�

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