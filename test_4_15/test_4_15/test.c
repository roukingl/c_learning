#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int PaiXu1(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//int PaiXu2(consvoid* e1, const void* e2)
//{t 
//    return *(int*)e2 - *(int*)e1;
//}
//
//int main()
//{
//    int arr[1000] = { 0 };
//    int k;
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    scanf("%d", &k);
//    if (k == 0) 
//    {
//        qsort(arr, n, sizeof(int), PaiXu1);
//    }
//    else if (k == 1)
//    {
//        qsort(arr, n, sizeof(int), PaiXu2);
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
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
//    char ch[1000];
//    gets(ch);
//    char* pch1 = ch;
//    while (ch[i] != '\0')
//    {
//        pch1++;
//        i++;
//    }
//    char* pch2 = pch1;
//    while (*pch2 != ' ' && *pch2 != ch[0])
//    {
//        pch2--;
//    }
//
//    if (*pch2 == ' ')
//    {
//        printf("%lld", pch1 - pch2 - 1);
//    }
//    if (*pch2 == ch[0])
//    {
//        printf("%lld", pch1 - pch2);
//    }
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char ch[100];
//    gets(ch);
//    int len = strlen(ch) / 8;
//    int i = 0;
//    int j = 0;
//    if (strlen(ch) % 8 == 0)
//    {
//        for (i = 0; i < len; i++)
//        {
//            for (; j < 8; j++)
//            {
//                printf("%c", ch[j]);
//            }
//        }
//    }
//         j = 0;
//         int x = 0;
//    else
//    {
//        for (i = 0; i < len + 1; i++)
//        {
//            for (; j < 8; j++)
//            {
//                printf("%c"ch[j]);
//            }
//        }
//        if (i == len + 1)
//        {
//            for (x = 0; x < stelen - len * 8; x++)
//            {
//                printf("0");
//            }
//        }
//    }
//
//    return 0;
//}




#include <stdio.h>
#include <string.h>


void Dayin(char ch[13][8], int i)//¥Ú”°
{
    int j = 0;
    for (j = 0; j < 8; j++)
    {
        printf("%c", ch[i][j]);
    }
}

int main()
{
    int i = 0;
    char ch[13][8] = { 0 };
    gets(ch);

    long long len = strlen(ch) / 8;
    int ret = strlen(ch) % 8;
    if (ret == 0)
    {
        for (i = 0; i < len; i++)
        {
            Dayin(ch, i);
        }
    }
    else
    {
        for (i = 0; i < len + 1; i++)
        {
            Dayin(ch, i);
            if (i != len)
            {
                printf("\n");
            }
        }

        if (i == len + 1)
        {
            for (i = 0; i < 8 - ret; i++)
            {
                printf("0");
            }
        }
    }

    return 0;
}