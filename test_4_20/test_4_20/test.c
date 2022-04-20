#define  _CRT_SECURE_NO_WARNINGS 1


//
//int main()
//{
//	char ch = 0;
//
//	printf("你会好好学习吗?:>Y/N\n");
//	scanf("%c", &ch);//输入你的选择
//
//	if (ch == 'Y')//选择的一种情况
//	{
//		printf("走上人生巅峰\n");
//	}
//	else if (ch == 'N')//选择的第二种情况
//	{
//		printf("生活窘迫\n");
//	}
//	else//选择的第三种情况
//	{
//		printf("输入错误\n");
//	}
//	//注意:else最后一个选择是前面所有选择集合的补集
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	
//	while (i < 3)//判断为真为假
//	{
//		printf("求关注,求点赞,求收藏\n");
//		i = i + 1;
//	}
//	//i = 0时,0<3成立,为真进入{ }执行打印、i变为1,不断循环
//	//直到i = 3时,3<3时不成立为假结束 
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//extern int Add(int, int);//函数声明,对编译器说有一个函数长这样
//
//int main()//我们想实现一个函数可以把两个整数加起来
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = Add(a, b);//函数调用 //和数学函数f(x, y) = x + y一个道理,
//	                               //下面我们实现=右边的部分
//	printf("%d", ret);
//
//	return 0;
//}
//
//int Add(int x, int y)//函数实现部分(函数定义)
//{
//	return x + y;//从哪调用就把这个值返回到哪
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//
//	int a = arr[3];//把arr[3]内的数传给a
//	printf("%d", a);
//
//	return 0;
//}

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。


//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int ret = is_prime(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//实现函数判断year是不是润年。


#include <stdio.h>

int main()
{
	int year = 0;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d年是闰年\n", year);
	}
	else
	{
		printf("%d年不是闰年\n", year);
	}

	return 0;
}
