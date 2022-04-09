#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    float y = 0;
//    float m = 0;
//    float e = 0;
//    scanf("%d;%f,%f,%f", &a, &y, &m, &e);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", a, y, m, e);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("\"");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    printf("\n%d", printf("Hello world!"));
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int ret = 0;
//    scanf("%d %d", &a, &b);
//
//    ret = a + b;
//    if (ret > 7)\
//    {
//        ret = ret % 7;
//        if (ret == 0)
//        {
//            ret = 7;
//        }
//    }
//    printf("%d", ret);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int time = 0;
//    scanf("%d", &time);
//    int s = time % 60;
//    int h = time / 3600;
//    int min = (time - h * 3600 - s) / 60;
//    printf("%d %d %d", h, min, s);
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
//    printf("%d", 2 << (n - 1));
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    long long age = 0;
//    scanf("%d", &age);
//    printf("%lld", age * 31560000);
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    unsigned int n = 0;
//    scanf("%u", &n);
//    float arr[n];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%.2f", arr[i]);
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        printf("%.2f", arr[i]);
//        printf(" ");
//    }
//
//    return 0;
//}
//
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    float a = 0;//S=√[p(p-a)(p-b)(p-c)] 
//    float b = 0;
//    float c = 0;
//    float s = 0;
//    float l = 0;
//    scanf("%f %f %f", &a, &b, &c);
//    l = a + b + c;
//    float p = l / 2;
//    s = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("circumference=%.2f area=%.2f", l, s);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;//n盒
//    int h = 0;//多少时间能喝完一盒
//    int m = 0;//多少时间过去
//    scanf("%d %d %d", &n, &h, &m);//输入
//    printf("%d", ((n * h) - m) / h);//n*h是全部喝完多长时间
//                                //-m是去掉喝的时间,/h是还剩几盒4,
//                                //如果有打开没喝完的直接利用整形相除把小数去掉了
//
//    return 0;
//}