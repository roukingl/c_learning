#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
//
////从键盘输入10个数，用函数编程实现将其中最大数与最小数的位置对换后，
////再通过主调函数输出调整后的数组。
//
//void sort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	sort(arr, sizeof(arr));
//
//	return 0;
//}


//// 2120101335丁瑞航
//#include <stdio.h>
//
//int is_min_count(int* array)
//{
//	int min_count = array[0];
//
//	int min_subscript = 0;
//
//	for (int i = 1; i < 10; i++)
//	{
//		if (array[i] < min_count)
//		{
//			min_count = array[i];
//			min_subscript = i;
//		}
//	}
//	return min_subscript;
//}
//
//int is_max_count(int* array)
//{
//	int max_count = array[0];
//
//	int max_subscript = 0;
//
//	for (int i = 1; i < 10; i++)
//	{
//		if (array[i] > max_count)
//		{
//			max_count = array[i];
//			max_subscript = i;
//		}
//	}
//	return max_subscript;
//}
//
//
//int main()
//{
//	int array[10] = { 0 };
//
//	printf("这十个数字是\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//	
//	int min = is_min_count(array);
//	int max = is_max_count(array);
//
//	int tmp = array[min];
//	array[min] = array[max];
//	array[max] = tmp;
//
//	printf("改变完位置后\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", array[i]);
//	}
//
//	return 0;
//}

////从键盘输入一个十进制数，使用递归方式实现将十进制转换成二进制输出。
//
//// 
//#include <stdio.h>
//#include <math.h>
//
//int fun(int number)
//{
//	static int i = 0;
//	if (number > 1)
//	{
//		return fun(number / 2) + (number % 2) * pow(2, i++);
//	}
//	else
//	{
//		return number;
//	}
//}
//
//int main()
//{
//	int number = 0;
//	while (scanf("%d", &number) != EOF)
//	{
//		int ret = fun(number);
//		printf("\n%d\n", ret);
//	}
//
//	return 0;
//}


//// 2120101335丁瑞航
//#include<stdio.h>
// 
//void change2(int num)
//{
//	if (num == 0)
//	{
//		return;
//	}
//	else
//	{
//		change2(num / 2);
//		printf("%d", num % 2);
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个十进制数\n");
//	scanf("%d", &num);
//
//	printf("十进制%d转换为二进制为: ", num);
//	change2(num);
//
//	return 0;
//}

//
//输入一个字符串，通过指针方式实现将其中的字符组成一个数字。
//（例如：输入ab3c7dd2w，输出结果为372）


//// 2120101335丁瑞航
//#include <stdio.h>
//#include <string.h>
//
//void fun(char* ch)
//{	
//	int len = strlen(ch);
//	for (int i = 0; i < len; i++)
//	{
//		if (*(ch + i) > '0' && *(ch + i) < '9')
//		{
//			printf("%c", *(ch + i));
//		}
//	}
//}
//
//int main()
//{
//	char ch[100] = { 0 };
//	scanf("%s", ch);
//
//
//	fun(ch);
//
//	return 0;
//}

//
//设计一个函数，使用指针方式，实现将字符串b连接到字符串a的后面。
//（例如：输入a字符串的内容为：“abcd”，b字符串的内容为：“12345”，处理后a字符串的内容为：“abcd12345”）

// 2120101335丁瑞航
#include <stdio.h>
#include <assert.h>

char* my_strcat(char* ch1, char* ch2)
{
	assert(ch1 && ch2);
	char* ch = ch1;
	
	while (*ch1 != '\0')
	{
		ch1++;
	}

	while (*ch2 != '\0')
	{
		*ch1 = *ch2;
		ch1++;
		ch2++;
	}

	return ch;
}

int main()
{
	char ch1[100] = { 0 };
	char ch2[100] = { 0 };

	printf("请输入被拼接的字符串: ");
	scanf("%s", ch1);
	printf("\n请输入拼接的字符串: ");
	scanf("%s", ch2);

	char* ch = my_strcat(ch1, ch2);
	printf("\n拼接后的字符串为: %s", ch);

	return 0;
}