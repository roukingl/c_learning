#define _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//
//int main()
//{
//    int i = -1;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i + j == n - 1)
//                {
//                    printf("*");
//                }
//                else if (i == j)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//   
//    return 0;
//}

//
//#include <stdio.h>
//
//int Days(int year, int month)
//{
//    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//    {
//        return 31;
//    }
//    else if (month == 4 || month == 6 || month == 9 || month == 11)
//    {
//        return 30;
//    }
//
//    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//    {
//        return 29;
//    }
//    return 28;
//
//}
//
//int main()
//{
//    int year = 0;
//    int month = 0;
//
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        int ret = Days(year, month);
//        printf("%d\n", ret);
//    }
//
//    return 0;
//

//
//#include <stdio.h>
//
//int DecideTriangle(int a, int b, int c)
//{
//    if ((a + b) > c && (a + c) > b && (b + c) > a)
//    {
//        if (a == b || a == c || b == c)
//        {
//            if (a == b && b == c)
//            {
//                return 1;
//            }
//            return 2;
//        }
//        return -1;
//    }
//    return 0;
//}
//
//int main()
//{
//    int a, b, c;
//
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        int ret = DecideTriangle(a, b, c);
//        //等边返回1,等腰返回2其余返回-1,不是返回0
//        if (ret == 1)
//        {
//            printf("Equilateral triangle!\n");
//        }
//        else if (ret == 2)
//        {
//            printf("Isosceles triangle!\n");
//        }
//        else if (ret == -1)
//        {
//            printf("Ordinary triangle!\n");
//        }
//        else if (ret == 0)
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//
//    return 0;
//}

//
//int removeElement(int* nums, int numsSize, int val)
//{
//    int j = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == val)
//        {
//            continue;
//        }
//        nums[j] = nums[i];
//        j++;
//    }
//    return j;
////}
//
//int searchInsert(int* nums, int numsSize, int target)
//{
//    int left = 0;
//    int right = numsSize - 1;
//    int ret = numsSize;
//
//    while (left <= right)
//    {
//        int mid = left + (right - left) / 2;
//        if (nums[mid] >= target)
//        {
//            ret = mid;
//            right = mid - 1;
//        }
//        else if (nums[mid] < target)
//        {
//            left = mid + 1;
//        }
//    }
//    return ret;
//}

//#include <stdio.h>
//
//int main()
//{
//	int left = 0;
//	int right = 9;
//	int mid = left + (right - left) / 2;
//
//	printf("%d\n", mid);
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int count = 0;
//    int n = 0, x = 0;
//    scanf("%d %d", &n, &x);
//
//    for (int i = 1; i <= n; i++)
//    {
//        int m = i;
//        while (m != 0)
//        {
//            if (m % 10 == x)
//            {
//                count++;
//            }
//            m /= 10;
//        }
//    }
//
//    printf("%d\n", count);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    while (i < 10)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
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
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//
//    while (scanf("%d", &i) != EOF)
//    {
//        sum = sum + i;
//    }
//
//    printf("%d", sum);
//
//    return 0;
//}

//
//#include <stdio.h>
//
//void Init(int* pa, int x)
//{
//    int i = 0;
//    for (i = 0; i < x; i++)
//    {
//        scanf("%d", pa);
//        pa++;
//    }
//}
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n + m];
//    int arr1[n];
//    int arr2[m];
//    Init(arr1, n);
//    Init(arr2, m);
//
//    int x = 0;
//    int y = 0;
//    for (int i = 0; i < m + n; i++)
//    {
//        if (x != n && y != m)
//        {
//            if (arr1[x] > arr2[y])
//            {
//                arr[i] = arr2[y];
//                y++;
//            }
//            else
//            {
//                arr[i] = arr1[x];
//                x++;
//            }
//        }
//        else
//        {
//            if (n > m)
//            {
//                int ret = n - m;
//                while (ret)
//                {
//                    printf("%d ", arr1[x]);
//                    x++;
//                    ret--;
//                }
//            }
//            else
//            {
//                int ret = m - n;
//                while (ret)
//                {
//                    printf("%d ", arr2[y]);
//                    y++;
//                    ret--;
//                }
//            }
//        }
//
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


#include <stdio.h>

void Init(int* pa, int x)
{
    int i = 0;
    for (i = 0; i < x; i++)
    {
        scanf("%d", pa);
        pa++;
    }
}

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[n + m];
    Init(arr, n + m);

    int i = 0;
    int j = 0;
    for (i = 0; i < n + m - 1; i++)
    {
        for (j = 0; j < n + m - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
