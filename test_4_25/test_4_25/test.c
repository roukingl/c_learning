#define  _CRT_SECURE_NO_WARNINGS 1

#include "main.h"

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int A[5] = { 1, 2, 3, 4, 5 };
//	int B[5] = { 6, 7, 8, 9, 10 };
//	for (i = 0; i < 5; i++)
//	{
//		int tem = A[i];
//		A[i] = B[i];
//		B[i] = tem;
//	}
//	printf("A数组内容是");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", A[i]);
//	}
//	printf("\n");
//	printf("B数组内容是");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", B[i]);
//	}
//
//	return 0;
//}


//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。


//#include <stdio.h>
//
//void init(int* str, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(str + i) = 0;
//		
//	}
//}
//
//void print(int* str, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", *(str + i));
//	}
//}
//
//void reverse(int* str, int n)
//{
//	int i = 0;
//	while (i <= n)
//	{
//		int tem = *(str + n - 1);
//		*(str + n - 1) = *(str + i);
//		*(str + i) = tem;
//		n--;
//		i++;
//	}
//}
//
//int main()
//{
//	int arr[5] ={ 1, 2, 3, 4, 5};
//	//init(arr, 5);
//	reverse(arr, 5);
//	print(arr, 5);
//
//	return 0;
//}


int main()
{
	//strlen
	//char ch[] = "abcdef";
	//unsigned int ret = my_strlen(ch);
	//printf("%u\n", ret);

	//strcpy
	char ch[] = "abcdef";


	return 0;
}