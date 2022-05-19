#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		if (i == 5)
//		{
//			continue;
//		}
//		i = i + 1;
//	}
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//
//	return 0;
//}


#include <stdio.h>

int main()
{
    int i = 0;

    do
    { 
        i++;
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);

    } while (i < 10);

    return 0;
}


