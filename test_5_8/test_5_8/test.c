#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int Div(int x, int y)
//{
//	return x - y;
//}
//
//
//int cheng(int x, int y)
//{
//	return x * y;
//}
//
//
//int chu(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int(*pa[4])(int, int) = { Add, Div, cheng, chu };
//
//	int ((*pb)[4])(int, int) = pa;
//
//	int ret = (*(pa)[0])(1, 8);
//
//	printf("%d", ret);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int i = 0;
//    int j = 0;
//
//    for (i = a; i <= b; i++)
//    {
//        if ((i - a + 1) % 5 == 0)
//        {
//            j++;
//        }
//    }
//
//    printf("%d", j);
//
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int i = 0;
//    int count = 0;
//
//    for (i = a; i <= b; i++)
//    {
//        int ret = i;
//        int sum = 0;
//        while (ret != 0)
//        {
//            sum = sum + ret % 10;
//            ret = ret / 10;
//        }
//        if (sum % 5 == 0)
//        {
//            count++;
//        }
//    }
//
//    printf("%d", count);
//
//    return 0;
//}


//#include <stdio.h>
//
//int BSX(int n)
//{
//    int sum = 0;
//    while (n > 9)
//    {
//        sum += n % 10;
//        n = n / 10;
//    }
//    return sum + n;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = BSX(n);
//
//    printf("%d", ret);
//
//    return 0;
//}


//#include <stdio.h>
//
//int BSX(int n)
//{
//    int sum = 0;
//    if (n <= 9)
//    {
//        return n;
//    }
//    while (n != 0)
//    {
//        sum += n % 10;
//        n /= 10;
//    }
//    return BSX(sum);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = BSX(n);
//
//    printf("%d", ret);
//
//    return 0;
//}

//
//#include <stdio.h>
//
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int count = 0;
//    scanf("%d %d", &a, &b);
//    int n = a ^ b;
//    while (n != 0)
//    {
//        n = n & (n - 1);
//        count++;
//    }
//
//
//    printf("%d", count);
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("奇 偶\n");
//	while (n != 0)
//	{
//		printf("%d ", n & 1);
//		n = n >> 1;
//		printf("%d\n", n & 1);
//		n = n >> 1;
//	}
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	int a = 9;
	int b = 5;
	printf("交换前:a = %d, b = %d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("交换后:a = %d, b = %d\n", a, b);

	return 0;
}