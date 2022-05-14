#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include <stdio.h>
//
//int DiGui(int m, int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    else if (m >= n)
//    {
//        return n + DiGui(m - n, n);
//    }
//    return m;
//}
//
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//
//    int ret = DiGui(m, n);
//    printf("%d\n", ret);
//
//    return 0;
//}
//
//bool isPerfectSquare(int num)
//{
//    int x = (int)sqrt(num);
//    return x * x == num;
//}

#include <stdio.h>

int Div(int x, int y)
{
	return x + y;
}

int Ret(int x, int y)
{
	return x - y;
}

int FFF(int x, int y)
{
	return x * y;
}

int Add(int x, int y)
{
	return x / y;
}


int main()
{
	int (* arr[4])(int, int) = {Add, Div, Ret, FFF};

	int (* (*parr)[4])(int, int) = arr;

	printf("%d\n", (*parr)[1](7, 3));

	return 0;
}