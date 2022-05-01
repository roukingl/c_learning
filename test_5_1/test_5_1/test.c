#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//long long factoria(int n)
//{
//    if (n > 1)
//    {
//        return n * factoria(n - 1);
//    }
//    return 1;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    long long ret = factoria(n);
//    printf("%lld\n", ret);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int Add(int n)
//{
//    if (n > 1)
//    {
//        return n + Add(n - 1);
//    }
//    return 1;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = Add(n);
//    printf("%d", ret);
//
//    return 0;
//}

//
//#include <stdio.h>
//
//int Ackmann(int n, int m)
//{
//    if (m == 0)
//    {
//        return n + 1;
//    }
//    else if (m > 0 && n == 0)
//    {
//        return Ackmann(m, 1);
//    }
//    else if (m > 0 && n > 0)
//    {
//        return Ackmann(m - 1, Ackmann(m, n - 1));
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//
//    int ret = Ackmann(n, m);
//    printf("%d\n", ret);
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//
//int dight(int x, int i)
//{
//    return x % (int)pow(10, i);
//}
//
//int main()
//{
//    int x = 0;
//    int i = 0;
//    scanf("%d%d", &x, &i);
//
//    int ret = dight(x, i);
//    printf("%d", ret);
//
//    return 0;
//}
//
//
//#include  <stdio.h>
//
//int Hx(int n, int x)
//{
//    if (n == 0)
//    {
//        return 1;
//    }
//    else if (n == 1)
//    {
//        return 2 * n;
//    }
//    else if (n > 1)
//    {
//        return 2 * x * Hx(n - 1, x) - 2 * (n - 1) * Hx(n - 2, x);
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    int x = 0;
//    scanf("%d%d", &n, &x);
//
//    int ret = Hx(n, x);
//    printf("%d\n", ret);
//
//    return 0;
//}

//
//#include <stdio.h>
//
//long long Fac(int n)
//{
//    if (n > 0)
//    {
//        return n * Fac(n - 1);
//    }
//    return 1;
//}
//
//long long Amn(int n, int m)
//{
//    if (n - m > 0)
//    {
//        return Fac(n) / Fac(n - m);
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//
//    long long ret = Amn(n, m);
//    printf("%lld\n", ret);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//void Reverse(int n)
//{
//    printf("%d", n % 10);
//    if (n > 9)
//    {
//        Reverse(n / 10);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    Reverse(n);
//
//    return 0;
//}