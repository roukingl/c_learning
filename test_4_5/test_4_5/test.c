#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    char c = 0;
    scanf("%c", &c);
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 2 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 1 + 2 * i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        int j = 0;
        for (j = 0; j < 1 + i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 3 - 2 * i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main()
{
    char ch = 0;
    scanf("%c", &ch);
    printf("%d", ch);

    return 0;
}

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("score1=%d,score2=%d,score3=%d", a, b, c);
    return 0;
}


#include <stdio.h>

struct stu
{
    long long int a;
    float yuyan;
    float math;
    float english;
};

int main()
{
    int i = 0;
    struct stu s[2] = { 0 };
    struct stu* ps = s;

    for (i = 0; i < 2; i++)
    {
        scanf("%lld;%f;%f;%f", ps->a, ps->yuyan, ps->math, ps->english);
        ps++;
    }

    for (i = 0; i < 2; i++)
    {
        printf("The each subject score of No. %lld is %.2f, %.2f, %.2f.\n",
            s[i].a, s[i].yuyan, s[i].math, s[i].english);
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

int main()
{
    char arr[10] = { 0 };
    scanf("%s", arr);
    char* parr = arr;
    int ret = strlen(arr) - 4;
    int i = 0;

    printf("year=");
    for (i = 0; i < ret; i++)
    {
        printf("%c", *parr);
        parr++;
    }
    printf("\nmonth=");
    for (i = 0; i < 2; i++)
    {
        printf("%c", *parr);
        parr++;
    }
    printf("\ndate=");
    for (i = 0; i < 2; i++)
    {
        printf("%c", *parr);
        parr++;
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int ret = 0;
    scanf("a=%d,b=%d", &a, &b);
    ret = a;
    a = b;
    b = ret;
    printf("a=%d,b=%d", a, b);

    return 0;
}


#include <stdio.h>

int main()
{
    char arr[10] = { 0 };
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        getchar();
        putchar(ch + 32);
        printf("\n");
    }

    return 0;
}