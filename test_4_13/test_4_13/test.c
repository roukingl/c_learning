#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//    printf("printf(\"Hello world!\");\n");
//    printf("cout<<\"Hello world!\"<<end1;");
//    return 0;
//}
//
//
//#include<stdio.h>
//
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << end1;\n");
//    printf("cout << \"Hello world!\" << endl;");
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int ch = 0;
//    int i;
//    while ((i = ch = getchar()) != EOF)
//    {
//        if (ch > i)
//        {
//            i = ch;
//        }
//    }
//    printf("%d", i);
//
//    return 0;
//}

//
//
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    for (i = 0; i < 4; i++)
//    {
//        scanf("%d", &j);
//        if (j > n)
//        {
//            n = j;
//        }
//
//    }
//    printf("%d", n);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    float r = 0;
//    double i = 3.1415926;
//    scanf("%f", &r);
//
//    printf("%.3lf", (4 / 3.0) * i * r * r * r);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//        int x, y;
//        scanf("%d%d", &x, &y);
//        printf("%d %d", x, y);
//        return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int x, y;
//    scanf("%d%d", &x, &y);
//    printf("%.2f", x / ((y / 100.0) * (y / 100.0)));
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//#define COL 3
//
//int main()
//{
//	int i = 0;
//	int arr[COL] = { 0 };
//	int j = 0;
//	int tem = 0;
//	for (i = 0; i < COL; i++)
//	{
//		scanf("%d", arr + i);
//	}
//
//	for (i = 0;i < COL;i++)
//	{
//		for (j = 0;j < COL - i -1;j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//	for (i = 0; i < COL; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 3; i < 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
////输出：20
//
//int main()
//{
//	int x, y;
//	int n = 0;
//	scanf("%d%d", &x, &y);
//	if (x > y)
//	{
//		n = y;
//	}
//	else 
//	{
//		n = x;
//	}
//
//	for (; n > 1; n--)
//	{
//		if (x % n == 0 && y % n == 0)
//		{
//			printf("两数最大公约数为:%d", n);
//			goto biao;
//		}
//	}
//	printf("两数最大公约数为1 ");
//
//	biao:
//
//	return 0;
//}
//
////打印1000年到2000年之间的闰年
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) 
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//
////写一个代码：打印100~200之间的素数
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		for (j = i - 1; j > 1; j--)
//		{
//			if (i % j == 0)
//			{
//				goto biao;
//			}
//		}
//		printf("%d ", i);
//	biao:;
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int ret = a + b;
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
//	int x, y;
//	scanf("%d", &x);
//
//	if (x < 5)
//	{
//		y = 1 - x * x * x
//			printf("%d\n", y);
//	}
//	else if (5 =< x && x < 15)
//	{
//		y = x - 1
//			printf(" %d\n", y);
//
//	}
//	else
//	{
//		y = 2 * x * x - 1
//			printf("%d\n", y);
//	}
//
//
//	return 0;
//}
//13班2120101335丁瑞航
//
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	char ch;
//	int ret;
//	scanf("%d%c%d", &a, &ch, &b);
//
//	switch (ch)
//	{
//	case '+':
//		ret = a + b;
//		printf("%d\n", ret);
//	case '-':
//		ret = a - b;
//		printf("%d\n", ret);
//	case '':
//	}
//
//
//#include <stdio.h>
//
//extern int b;
//
//int main()
//{
//	printf("%d", b);
//
//	return 0;
//}

//
//#include <stdio.h>
//
//#define HIGHT 1000//#define定义的标识符常量
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//枚举常量
//
//int main()
//{
//	200;//字面常量
//	3, 14;//字面常量
//
//	const int lin = 5;//const修饰的常变量是拥有常量属性的变量
//	                  //被const修饰的变量不能改变,所以叫常变量
//
//	printf("%d\n", HIGHT);//被#define定义的常量是的左右简单替换
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	//注：枚举常量的默认是从0开始，依次向下递增1的
//
//		return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = {'h', 'e','l','l','o'};
//	char arr2[] = {'h','e','l','l','o','\0'};
//	char arr3[] = "hello";
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//	return 0;
//}
/*

#include <stdio.h>

int main()
{
	printf("abcdef\n");//  /n是换行的意思,把光标移到下一行进行操作
	printf("\tab\tcdef\n");//  /t是水平制表符,我设置的是和四个空格一样长,根据习惯设置

	printf("\\  \?  \"  \'");// ?  \  "  '  打印时容易发生配对,使其混乱,所以打印时在前面加上/,表示转变意思  
	printf("\n");//换行
	printf("%d  %d", '\060', '\x28'); //'\0***'表示八进制字符,***是0~7的数
									  //'\x***'表示十六进制的字符

	return 0;
}*/

//
///*
//#include <stdio.h>
//
//int main()     
//{*/
//	int a = 10;
//	int b = 20;
//	int ret = a + b;
//	printf("%d\n", ret);
//				//当我们需要把整个程序注释时,但是中间也有一个*/与/*配对,
//				//导致,只注释了一部分,/*只和最近的*/配对
//	return 0;
//}
//*/