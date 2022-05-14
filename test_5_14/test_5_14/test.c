#define _CRT_SECURE_NO_WARNINGS 1

//
////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//
//#include <stdio.h>
//
//int Fun(int n)
//{
//	int sum = 0;
//	int yu = 0;
//	
//	while (n != 0 || yu != 0)
//	{
//		sum = sum + n;
//		yu = n % 2;
//		n = n / 2;
//		if (yu == 1)
//		{
//			sum++;
//			yu = 0;
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	while ((printf("你有多少钱："), scanf("%d", &n)) == 1)
//	{
//		int count = Fun(n);
//		printf("一共喝了%d瓶\n", count);
//	}
//
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 1; j < 2 * (n - i); j++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                if (j < i)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("*");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {            
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i <= n; i++)
//        {
//            for (int j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i <= n; i++)
//        {
//            for (int j = 0; j <= n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < i + 2; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i <= n; i++)
//        {
//            for (int j = 0; j < 2 * (n - i); j++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < 2 * i + 2; j++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j < n - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//
//    return 0;
//}


#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("* ");
                }
                printf("*\n");
            }
            else
            {
                for (int j = 0; j < n; j++)
                {
                    if (j == 0)
                    {
                        printf("* ");
                    }
                    else if (j == n - 1)
                    {
                        printf("  *");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }
    }

    return 0;
}