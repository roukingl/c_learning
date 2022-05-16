#define _CRT_SECURE_NO_WARNINGS 1

//
////计算1~100之间所有含8的数之和。（要求使用while和for两种语句实现，运行结果为：1287）
//
////2120101335丁瑞航
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
////编写程序，利用下列近似公式计算e值，误差应小于0.00001。（
////提示：误差小于0.00001，也就是要求分项 < 0.00001时循环结束）
//
////2120101335丁瑞航
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
////从键盘输入10个数，用选择法将其按由大到小的顺序排序；
////然后在排好序的数列中插入一个数，使数列保持从大到小的顺序。
//
////2120101335丁瑞航
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
//	printf("输入前：> ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n请输入第十一个数：");
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
//	printf("输入后：> ");
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//
////从键盘输入一个字符串，删除其中某个字符。如输入字符串“abcdefededff”
////删除其中的字符e，则输出的字符串为“abcdfddff”
//
//
////2120101335丁瑞航
//#include <stdio.h>
//
//int main()
//{
//	char ch[100] = { 0 };
//	printf("请输入字符串：\n");
//	gets(ch);
//
//	char* str = ch;
//	char* dst = ch;
//
//	char c = 0;
//	printf("请输入要删除的字符：\n");
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
//	printf("删除后的字符串为 %s\n", ch);
//	
//	return 0;
//}