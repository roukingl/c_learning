#define _CRT_SECURE_NO_WARNINGS 1
//
//int search(int* nums, int numsSize, int target)
//{
//    int left = 0;
//    int right = numsSize - 1;
//    while (left <= right)
//    {
//        int mid = left + (right - left) / 2;
//        if (nums[mid] > target)
//        {
//            right = mid - 1;
//        }
//        else if (nums[mid] < target)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}

//
//int* twoSum(int* nums, int numsSize, int target, int* returnSize)
//{
//    //取数
//    for (int i = 0; i < numsSize; i++)
//    {
//        //找对应的数
//        for (int j = i + 1; j < numsSize; j++)
//        {
//            if (nums[j] + nums[i] == target)
//            {
//                int* pa = malloc(sizeof(int) * 2);
//                pa[0] = i;
//                pa[1] = j;
//                *returnSize = 2;
//                return pa;
//            }
//        }
//    }
//    *returnSize = 0;
//    return NULL;
//}

//
//int* diStringMatch(char* s, int* returnSize)
//{
//    int i = 0;
//    int left = 0;
//    //ret 是该数组最大的
//    int ret = strlen(s);
//    int right = ret;
//    int* perm = (int*)malloc(sizeof(int) * (ret + 1));
//
//    for (i = 0; i < ret; i++)
//    {
//        if (*s == 'I')
//        {
//            perm[i] = left;
//            left++;
//        }
//        if (*s == 'D')
//        {
//            perm[i] = right;
//            right--;
//        }
//        s++;
//    }
//    perm[ret] = left;
//    *returnSize = ret + 1;
//    return perm;
//}

//
//int guessNumber(int n)
//{
//    int left = 1;
//    int right = n;
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = left + (right - left) / 2;
//        if (guess(mid) == -1)
//        {
//            right = mid - 1;
//        }
//        else if (guess(mid) == 1)
//        {
//            left = mid + 1;
//        }
//        else if (guess(mid) == 0)
//        {
//            break;
//        }
//    }
//    return mid;
//}