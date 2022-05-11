#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char ch[1000] = { 0 };
//    gets(ch);
//    int ret = strlen(ch) - 1;
//    for (int i = 0; i < ret; i++)
//    {
//        for (int j = 0; j < ret - i; j++)
//        {
//            if (ch[j] > ch[j + 1])
//            {
//                int tmp = ch[j + 1];
//                ch[j + 1] = ch[j];
//                ch[j] = tmp;
//            }
//        }
//    }
//    puts(ch);
//
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count = 1;
//    int num[100][100];
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            num[i - j - 1][j] = count;
//            count++;
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n - i; j++)
//        {
//            printf("%d ", num[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int Yang(int n)
//{
//    if (n % 2 == 1 && n != 1)
//    {
//        return 2;
//    }
//    if (n % 4 == 0)
//    {
//        return 3;
//    }
//    else if (n % 2 == 0 && n != 2)
//    {
//        return 4;
//    }
//    return -1;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = Yang(n);
//    printf("%d", ret);
//
//    return 0;
//}


//#include <stdio.h>
//
//void Print(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", pa[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(arr, sz);
//
//	return 0;
//\}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str[10000] = { 0 };
//    gets(str);
//    int begin = 0;
//    int len = strlen(str) - 1;
//    int sz = len;
//
//    while (sz > begin)
//    {
//        char tmp = str[begin];
//        str[begin] = str[sz];
//        str[sz] = tmp;
//        sz--;
//        begin++;
//    }
//
//    for (int i = 0; i < len + 1; i++)
//    {
//        printf("%c", str[i]);
//    }
//
//    return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//例如：2 + 22 + 222 + 2222 + 22222


//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int Sn = 0;
//
//	while (n != 0)
//	{
//		Sn += a;
//		a = a * 10 + a;
//		n--;
//	}
//
//	printf("%d\n", Sn);
//
//	return 0;
//}

//
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，
//其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//
//#include <stdio.h>
//#include <math.h>
//
//int GetBit(int i)
//{
//	int count = 0;
//	while (i != 0)
//	{
//		i = i / 10;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i <= 100000; i++)
//	{
//		int bit = GetBit(i);
//
//		if (bit == 1)
//		{
//			printf("%d ", i);
//		}
//		else
//		{
//			int sum = 0;
//			int n = i;
//			while (n != 0)
//			{
//				sum = sum + pow(n % 10, bit);
//				n = n / 10;
//			}
//			if (sum == i)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * (n -  i - 1) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}