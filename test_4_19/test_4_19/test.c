#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int sum = 0;
//    scanf("%d", &n);
//
//    while (n != 0)
//    {
//        n = n & (n - 1);
//        sum++;
//    }
//
//    printf("%d", sum);
//
//    return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int i = 0;
//    char ch[100] = { 0 };
//    scanf("%s", ch);
//
//    for (i = 0; i < strlen(ch); i++)
//    {
//        if (ch[i] >= 65 && ch[i] <= 90)
//        {
//            if (ch[i] == 'Z')
//            {
//                ch[i] = 'a';
//            }
//            else
//            {
//                ch[i] = ch[i] + 33;
//            }
//        }
//        else if (ch[i] >= 97  && ch[i] <= 99)
//        {
//            ch[i] = '2';
//        }
//        else if (ch[i] >= 100 && ch[i] <= 102)
//        {
//            ch[i] = '3';
//        }
//        else if (ch[i] >= 103 && ch[i] <= 105)
//        {
//            ch[i] = '4';
//        }
//        else if (ch[i] >= 106 && ch[i] <= 108)
//        {
//            ch[i] = '5';
//        }
//        else if (ch[i] >= 109 && ch[i] <= 111)
//        {
//            ch[i] = '6';
//        }
//        else if (ch[i] >= 112 && ch[i] <= 115)
//        {
//            ch[i] = '7';
//        }
//        else if (ch[i] >= 116 && ch[i] <= 118)
//        {
//            ch[i] = '8';
//        }
//        else if (ch[i] >= 119 && ch[i] <= 122)
//        {
//            ch[i] = '9';
//        }
//    }
//
//    printf("%s", ch);
//        
//    return 0;
//}


#include <stdio.h>

int main()
{
    int i = 0;
    int ret = 0;
    int sum = 0;
    int arr = 0;
    int j = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr);
        ret = 0;
        sum = 0;
        while (arr > 1)
        {
            ret = ret + arr % 3;
            arr = arr / 3;
            sum = sum + arr;
            arr = ret + arr;
            ret = 0;
        }
        if (sum != 0)
        {
            printf("%d\n", sum);
        }
    }

    return 0;
}