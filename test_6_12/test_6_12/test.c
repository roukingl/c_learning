#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
//
////�Ӽ�������10�������ú������ʵ�ֽ��������������С����λ�öԻ���
////��ͨ�����������������������顣
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


//// 2120101335����
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
//	printf("��ʮ��������\n");
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
//	printf("�ı���λ�ú�\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", array[i]);
//	}
//
//	return 0;
//}

////�Ӽ�������һ��ʮ��������ʹ�õݹ鷽ʽʵ�ֽ�ʮ����ת���ɶ����������
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


//// 2120101335����
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
//	printf("������һ��ʮ������\n");
//	scanf("%d", &num);
//
//	printf("ʮ����%dת��Ϊ������Ϊ: ", num);
//	change2(num);
//
//	return 0;
//}

//
//����һ���ַ�����ͨ��ָ�뷽ʽʵ�ֽ����е��ַ����һ�����֡�
//�����磺����ab3c7dd2w��������Ϊ372��


//// 2120101335����
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
//���һ��������ʹ��ָ�뷽ʽ��ʵ�ֽ��ַ���b���ӵ��ַ���a�ĺ��档
//�����磺����a�ַ���������Ϊ����abcd����b�ַ���������Ϊ����12345���������a�ַ���������Ϊ����abcd12345����

// 2120101335����
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

	printf("�����뱻ƴ�ӵ��ַ���: ");
	scanf("%s", ch1);
	printf("\n������ƴ�ӵ��ַ���: ");
	scanf("%s", ch2);

	char* ch = my_strcat(ch1, ch2);
	printf("\nƴ�Ӻ���ַ���Ϊ: %s", ch);

	return 0;
}