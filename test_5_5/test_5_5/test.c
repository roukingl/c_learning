#define  _CRT_SECURE_NO_WARNINGS 1
//
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	char ch = 8;
//	float f = 5.6f;
//	double rok = 7.8;
//	int arr[10] = { 0 };
//
//	int* pi = &i;
//	char* pc = &ch;
//	float* pf = &f;
//	double* pr = &rok;
//	int* parr = arr;//数组首元素的地址
//
//	printf("%zd\n", sizeof(pi));
//	printf("%zd\n", sizeof(pc));
//	printf("%zd\n", sizeof(pf));
//	printf("%zd\n", sizeof(pr));
//	printf("%zd\n", sizeof(parr));
//
//	return 0;
//}

//
//#include <stdio.h>
//
//struct Student//自定义类型struct Student
//{
//	char name[20];//姓名
//	int age;      //年龄
//	char id[20];  //学号
//	char sex[5];  // 性别
//};
//
//int main()
//{
//	//创建一个变量stu 类型是struct Strdent，并且给它初始化
//	struct Student stu = { "张三",19,"2020030816","男" };
//
//	//打印结构体内成员信息
//	//1.
//	printf("1.\n姓名：%s\n 年龄：%d\n 学号：%s\n 性别：%s\n", stu.name,stu.age,stu.id,stu.sex);
//	printf("\n");
//
//
//	struct Student* pstu = &stu;//把stu的地址放入pstu中
//
//	//2.*pstu就是stu
//	printf("2.\n姓名：%s\n 年龄：%d\n 学号：%s\n 性别：%s\n", (*pstu).name, (*pstu).age, (*pstu).id, (*pstu).sex);
//	printf("\n");
//
//
//	//3.->操作符表示指针所指向地址的值
//	printf("3.\n姓名：%s\n 年龄：%d\n 学号：%s\n 性别：%s\n", pstu->name, pstu->age, pstu->id, pstu->sex);
//	printf("\n");
//
//	return 0;
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	printf("abc");
//	system("cls");
//	printf("ajdfoadjf");
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int max3(int x, int y, int z)
//{
//    int ret = x;
//    if (y > ret)
//    {
//        ret = y;
//    }
//    if (z > ret)
//    {
//        ret = z;
//    }
//    return ret;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//
//    float m = max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) + max3(a, b, b + c));
//
//    printf("%.2f", m);
//
//    return 0;
//}


#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int i = 0;
    int count = 0;

    for (i = a; i <= b; i++)
    {
        if ((i - a + 1) % 5 == 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}