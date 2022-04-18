#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    char ch[1000][101] = { 0 };
//
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s", &ch[i]);
//    }
//
//    int j = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < n - i - 1; j++)
//        {
//            char tmp[101] = { 0 };
//            if (strcmp(ch[j], ch[j + 1]) > 0)
//            {
//                strcpy(tmp, ch[j]);
//                strcpy(ch[j], ch[j + 1]);
//                strcpy(ch[j + 1], tmp);
//            }
//        }
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        printf("%s\n", ch[i]);
//    }
//
//    return 0;
//}