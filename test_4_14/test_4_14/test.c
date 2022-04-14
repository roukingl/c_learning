#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//    int k = 0;
//    int i = 0;
//    char arr[1000] = { 0 };
//    scanf("%s", arr);
//    scanf("%d", &k);
//
//    char* parr = arr;
//    for (i = 0; i < k; i++)
//    {
//        printf("%c", *(parr +i) );
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
//    int n, k;
//    int i = 0;
//    int arr[1000] = { 0 };
//    while (EOF != scanf("%d%d", &n, &k))
//    {
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//
//        int j = 0;
//        int temp = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                if (arr[j] > arr[j + 1])
//                {
//                    temp = arr[j];
//                    arr[j] = arr[j + 1];
//                    arr[j + 1] = temp;
//                }
//            }
//        }
//        for (i = 0; i < k; i++)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//        
//
//    return 0;
//}