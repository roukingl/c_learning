#define  _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	if (y > x)
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int ret = Max(a, b);
//	printf("%d", ret);
//
//	return 0;
////}
//
//
//#include <stdio.h>
//int main()
//{
//    int* p = NULL;
//    int a[] = { 1, 2, 3, 4 };
//    p = a;
//    *(p++) +=  100;
//    printf("%d %d %d %d %d\n", *p, a[0], a[1], a[2], a[3]);
//    return 0;
//}

#include <stdio.h>
//
//void test(int*** ppb, int** pb)
//{
//	int arr[] = { 0 };
//	*ppb = arr;
//	*pb = arr;
//}
//
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	test(&ppa, ppa);
//	printf("%p\n", &pa);
//	printf("%p\n",ppa);
//	
//	return 0;
//}
 
 
// 
// 
// 
//void test(int* pa)
//{
//	*pa = 239;
//	
//}
//
//
//int main()
//{
//	int a = 0;
//	test(&a);
//
//	printf("%d", a);
//	return 0;
//}