#define _CRT_SECURE_NO_WARNINGS 1

//
////����1~100֮�����к�8����֮�͡���Ҫ��ʹ��while��for�������ʵ�֣����н��Ϊ��1287��
//
////2120101335����
//#include <stdio.h>
//
//int main()
//{
//	int sum = 0;
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 10 == 8)
//		{
//			sum += i;
//		}
//		else if (i / 10 == 8)
//		{
//			sum += i;
//		}
//		i++;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//
////��д�����������н��ƹ�ʽ����eֵ�����ӦС��0.00001����
////��ʾ�����С��0.00001��Ҳ����Ҫ����� < 0.00001ʱѭ��������
//
////2120101335����
//#include <stdio.h>
//
//int Factorial(int i)
//{
//	if (i > 1)
//	{
//		return i * Factorial(i - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 1;
//	double sum = 0;
//	while ( (1.0 / Factorial(i)) > 0.00001)
//	{
//		sum += 1.0 / Factorial(i);
//		i++;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//
//
////�Ӽ�������10��������ѡ�񷨽��䰴�ɴ�С��˳������
////Ȼ�����ź���������в���һ������ʹ���б��ִӴ�С��˳��
//
////2120101335����
//#include <stdio.h>
//
//int main()
//{
//	int arr[11] = { 0 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 9 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	printf("����ǰ��> ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n�������ʮһ������");
//
//	scanf("%d", &arr[10]);
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	printf("�����> ");
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//
////�Ӽ�������һ���ַ�����ɾ������ĳ���ַ����������ַ�����abcdefededff��
////ɾ�����е��ַ�e����������ַ���Ϊ��abcdfddff��
//
//
////2120101335����
//#include <stdio.h>
//
//int main()
//{
//	char ch[100] = { 0 };
//	printf("�������ַ�����\n");
//	gets(ch);
//
//	char* str = ch;
//	char* dst = ch;
//
//	char c = 0;
//	printf("������Ҫɾ�����ַ���\n");
//	scanf("%c", &c);
//
//	while (*str != '\0')
//	{
//		if (*str == c)
//		{
//			str++;
//		}
//		else
//		{
//			*dst = *str;
//			dst++;
//			str++;
//		}
//	}
//	*dst = '\0';
//	printf("ɾ������ַ���Ϊ %s\n", ch);
//	
//	return 0;
//}