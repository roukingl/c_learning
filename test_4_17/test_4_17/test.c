#define  _CRT_SECURE_NO_WARNINGS 1
//
//
//#include <stdio.h>
//
//int main()
//{
//    int ch = 0;
//    scanf("%x", &ch);
//    printf("%d", ch);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//#include <math.h>
//
//int ZhiShu(unsigned int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//void ZhiYinZi(unsigned int n)//质因子
//{
//	unsigned int i = 0;
//	int ret = 0;
//	for (i = 2; i < n; i++)
//	{
//		ret = ZhiShu(n);
//		if (ret == 1)
//		{
//			printf("%u ", n);
//			break;
//		}
//		if (n % i == 0)
//		{
//			printf("%u ", i);
//			n = n / i;
//			i = 1;
//		}
//	}
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//
//	ZhiYinZi(n);//质因子
//
//	return 0;
////}
//
//
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[10] = { 0 };
//    scanf("%s", arr);
//    int left = 0;
//    int right = strlen(arr) - 1;
//    char tem = '0';
//
//    while (left < right)
//    {
//        tem = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tem;
//        left++;
//        right--;
//    }
//    printf("%s", arr);
//        return 0;
//}


#include <stdio.h>
//
//void swap(int* pa, int* pb)
//{
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 19;
//
//	printf("交换前:a = %d, b = %d\n", a, b);
//
//	swap(&a, &b);
//
//	printf("交换后:a = %d, b = %d\n", a, b);
//	return 0;
//}
//
//void Delay(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %3d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Delay(n);
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	int in = 67;
	printf("in = %o\n", in);

	short sh = 67;
	printf("sh = %hd\n", sh);

	long lo = 67;
	printf("lo = %ld\n", lo);

	long long lolo = 67;
	printf("lolo = %lld\n", lolo);

	unsigned int u_in = 67;
	printf("u_in = %u\n", u_in);

	unsigned short u_sh = 65535;
	printf("u_sh = %hu\n", u_sh);

	unsigned long u_lo = 4294967295;
	printf("u_lo = %lu\n", u_lo);

	unsigned long long u_lolo = 18446744073709551615;
	printf("u_lolo = %llu\n", u_lolo);

	float f = 67.0f;
	printf("f = %f\n", f);

	double  dou = 67.0;
	printf("dou = %lf\n", dou);

	long double lo_dou = 67.0;
	printf("lo_dou = %llf\n", lo_dou);

	return 0;
}