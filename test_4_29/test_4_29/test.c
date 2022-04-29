#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int PanDuan(int n)
//{
//	if (n > 2)
//	{
//		return PanDuan(n - 1) + PanDuan(n - 2);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = PanDuan(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int de = 0;
//    scanf("%d", &n);
//    int arr[n];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &de);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != de)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//
//    return 0;
//}

//
//#include <stdio.h>
//#include <ctype.h>
//
//
//int main()
//{
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (islower(ch))
//        {
//            printf("%c\n", toupper(ch));
//        }
//        if (isupper(ch))
//        {
//            printf("%c\n", tolower(ch));
//        }
//    }
//
//    return 0;
//}

//
//#include <stdio.h>
//#include <ctype.h>
//
//
//int main()
//{
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (islower(ch))
//        {
//            printf("%c\n", toupper(ch));
//        }
//        if (isupper(ch))
//        {
//            printf("%c\n", tolower(ch));
//        }
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        getchar();
//        if (isalpha(ch))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int arr[3] = { 0 };
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int max = arr[0];
//    for (i = 1; i < 3; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d", max);
//}
//
//
//#include <stdio.h>
//
//int Shui(int i, int n)
//{
//    return Shui()
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 10000; i < 100000; i++)
//    {
//            printf("%d ", Shui(i, 10000));
//    }
//    return 0;
//}