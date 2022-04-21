#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
// int Juge(char jch[], char jc, int i)
//{
//    if (jc >= 48 && jc <= 57)
//    {
//        if (jch[i] == jc)
//        {
//            return 1;
//        }
//    }
//    else
//    {
//        if (jch[i] == jc || jch[i] == jc + 32 || jch[i] == jc - 32)
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int i = 0;
//    char ch[1000] = { 0 };
//    gets(ch);
//    char c = 0;
//    scanf("%c", &c);
//    int ret = 0;
//
//    for (i = 0; i < 1000; i++)
//    {
//        /*if (c >= 48 && c <= 57)
//        {
//            if (ch[i] == c)
//            {
//                ret++;
//            }
//        }*/
//        /*else
//        {
//            if (ch[i] == c || ch[i] == c + 32 || ch[i] == c - 32)
//            {
//                ret++;
//            }
//        }*/
//        ret = ret + Juge(ch, c, i);
//        
//    }
//
//    printf("%d", ret);
//
//    return 0;
//}
//
//


//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	char ch[63][15] = { 0 };
//
//	for (i = 0; i < 63; i++)
//	{
//		scanf("%s", ch[i]);
//	}
//
//	for (; i >= 0; i--)
//	{
//		printf("%s ", ch[i - 1]);
//	}
//
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//
//	char ch[1000] = { 0 };
//	gets(ch);
//	long long ret = strlen(ch);
//
//	for (; ret >= 0; ret--)
//	{
//		printf("%c", ch[ret]);
//	}
//
//	return 0;
//}