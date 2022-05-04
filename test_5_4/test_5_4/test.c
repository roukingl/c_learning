#define  _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//
//int main()
//{
//	const int x = 10;
//	x = 20;
//	return 0;
//}


#include <stdio.h>

int main()
{
	int i = 10;
	printf("改变前：%d\n", i);
	      //&是取地址操作符，用来取出地址
	int* pi = &i; //我们把i变量的地址去出，放到指针变量pi里

	*pi = 20; //因为pi里放的是i的地址，所以通过解引用操作符找到i的位置放20  

	printf("改变后：%d\n", i);


	return 0;
}
