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
//���������������������������Լ��
//���磺
//���룺20 40
////�����20
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
//			printf("�������Լ��Ϊ:%d", n);
//			goto biao;
//		}
//	}
//	printf("�������Լ��Ϊ1 ");
//
//	biao:
//
//	return 0;
//}
//
////��ӡ1000�굽2000��֮�������
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
////дһ�����룺��ӡ100~200֮�������
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
//13��2120101335����
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
//#define HIGHT 1000//#define����ı�ʶ������
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//ö�ٳ���
//
//int main()
//{
//	200;//���泣��
//	3, 14;//���泣��
//
//	const int lin = 5;//const���εĳ�������ӵ�г������Եı���
//	                  //��const���εı������ܸı�,���Խг�����
//
//	printf("%d\n", HIGHT);//��#define����ĳ����ǵ����Ҽ��滻
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	//ע��ö�ٳ�����Ĭ���Ǵ�0��ʼ���������µ���1��
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
	printf("abcdef\n");//  /n�ǻ��е���˼,�ѹ���Ƶ���һ�н��в���
	printf("\tab\tcdef\n");//  /t��ˮƽ�Ʊ��,�����õ��Ǻ��ĸ��ո�һ����,����ϰ������

	printf("\\  \?  \"  \'");// ?  \  "  '  ��ӡʱ���׷������,ʹ�����,���Դ�ӡʱ��ǰ�����/,��ʾת����˼  
	printf("\n");//����
	printf("%d  %d", '\060', '\x28'); //'\0***'��ʾ�˽����ַ�,***��0~7����
									  //'\x***'��ʾʮ�����Ƶ��ַ�

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
//				//��������Ҫ����������ע��ʱ,�����м�Ҳ��һ��*/��/*���,
//				//����,ֻע����һ����,/*ֻ�������*/���
//	return 0;
//}
//*/