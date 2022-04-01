#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num = 1;
	int n = 0;
	int j = 0;
	scanf("%d", &n);

		for (j = 1; j <= n; j++)
		{
			num = num*j;
		}
	
		printf("%d\n", num);
	return 0;
}

int main()
{

	int num = 1;
	int n = 0;
	int ret = 0;
	
	//for (ret = 1; ret <= 10; ret++)
	//{
	//	for (j = 1,ret = 1; j <= ret; j++)
	//	{
	//		num = num*j;
	//	}
	//	n = n + num;
	//}
	//printf("%d\n", n);

	for (ret = 1; ret <= 10; ret++)
	{
		num = num * ret;
		n = n + num;
	}
	printf("%d\n", n);

	return 0;
}
	/*if (k > arr[ret])
	{
		ret = (ret + x) / 2;
	}
	else
	{
		ret = (left + ret) / 2;
	}*/

int main()
{
	int k = 88;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;
	int mid = 0;

	while(left <= right)
	{
		 mid = (left + right) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标是 :%d", mid);
			break;
		}
	}

	if (left > right)
	{
		printf("找不到了\n");
	}
	return 0;
}

#include <string.h>
#include <windows.h>


int main()
{
	char arr1[] = { "welcome to bit!!!!!!" };
	char arr2[] = { "####################" };
	int right = strlen(arr1) - 1;
	int left = 0;

	while ( left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n", arr2);
		Sleep(1000); //睡眠一秒
		system("cls"); //清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}



int main()
{
	char password[20] = { 0 };
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码: >");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功]n");
			break;
		}
		else
		{
			printf("密码错误,请重新输入! \n");
		}
	}
	if (i == 3)
	{
		printf("三次密码输入错误,退出程序");
	}

	return 0;
}

#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("*********************************\n");
	printf("*******    1.开始游戏     *******\n");
	printf("*******    0.退出游戏     *******\n");
	printf("*********************************\n");

}

void game()
{
	int guess = 0;
	//%100+1,余数就是0--100
	int ret = rand() % 100 + 1;//0--32767
	//printf("%d", ret);
	//猜数字
	
	while (1)
	{		
		printf("猜数字 :>");
		scanf("%d", &guess);
	
		if (ret < guess)
		{
			printf("猜大了\n");
		}
		else if (ret > guess)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你,猜中了\n");
			break;
		}
	}
}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;


		do
		{	menu();
			printf("请选择 :>");
			scanf("%d", &input);

			switch (input)
			{
				case 1:
					game();
					break;
				case 0:
					printf("退出游戏");
					break;
				default:
					printf("输入错误,请重新输入");
					break;
			}
		} while (input);

	return 0;
}