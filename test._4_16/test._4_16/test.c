#define  _CRT_SECURE_NO_WARNINGS 1
//
//
////��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			if (i % 10 == 9 && i / 10 == 9)
//			{
//				ret += 1;
//			}
//			ret++;
//		}
//		
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//
////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + pow(-1, i - 1)*1.0 / i;
//	}
//
//	printf("%lf", sum);
//
//	return 0;
//}
//
//
////��10 �����������ֵ
//
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	/*for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}*/
//	int max = arr[0];
//
//	for (i = 1;i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("%d", max);
//
//	return 0;
//}
//
////����Ļ�����9*9�˷��ھ���
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %-2d   ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
////
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 20;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int mid = (left + right) / 2;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���, %d���±�Ϊ%d\n",k, mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("nnd�Ҳ���������?");
//	}
//
//	return 0;
//}