#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int i = 9;
//	char ch = 3;
//	double j = 2.4;
//	float f = 6.4f;
//	printf("%d\n", sizeof(i));//(求i变量和int类型在内存中分配的空间)
//	printf("%d\n", sizeof (int));
//
//	printf("%d\n", sizeof ch);//把括号去了也可以求出大小
//						 //由此可以看出sizeof事操作符不是函数
//	printf("%d\n", sizeof (char)); 
//
//
//	printf("%d\n", sizeof(j));
//	printf("%d\n", sizeof(double));
//
//	printf("%d\n", sizeof(f));
//	printf("%d\n", sizeof(float));
//
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	//我们写个循环打印1-10的数
//
//	i = 1; // 从1开始打印
//	while (i <= 10)//i 满足条件进入循环
//	{
//		printf("%d ", i);
//		//要改变i可以写成i = i + 1;
//		i++;//也可以写成这样
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//typedef unsigned int u_int;
//
//int main()
//{
//	u_int i = 20;
//
//	printf("%u\n", i);
//
//	return 0;
//}


//#include <stdio.h>
//
//void test()
//{
//    int j = 0;//我们都知道j在test函数结束时销毁，开始时创建
//              //打印时就一直打印1，达不到打印0-9的效果
//    j++;
//    printf("%d ", j);
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)//打印0-9
//    {
//        test();
//    }
//    return 0;
//}


#include <stdio.h>

void test()
{
    //static修饰局部变量
    static int i = 0;//创建后函数结束不会销毁
    i++;
    printf("%d ", i);
}

int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        test();
    }
    return 0;
}
