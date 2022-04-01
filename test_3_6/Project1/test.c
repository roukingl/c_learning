#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int zhong = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);

	if (a < b)
	{
		zhong = a;
		a = b;
		b = zhong;
	}
	if (a < c)
	{
		zhong = a;
		a = c;
		c = zhong;

	}
	if (b < c)
	{
		zhong = b;
		b = c;
		c = zhong;
	}

	printf("%d %d %d", a, b, c);

	return 0;
}


int play(int x, int y ,int l)
{	

	for (l = x; l > 0; l--)
	{
		if (x % l == 0 && y % l ==0)
		{
			return l;
		}
	}
}


int main()
{
	int i = 0;
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);

	if (m < n)
	{
		int ret = play( m,  n,  i);
		if (ret = 1)
		{
			printf("两数最大公约数为1");
		}
		else
		{
			printf("%d", ret);

		}
	}
	else if (m > n)
	{
		int ret = play(n, m, i);
		if (ret = 1)
		{
			printf("两数最大公约数为1");
		}
		else
		{
			printf("%d", ret);

		}
	}
	else
	{
		printf("%d", m);
	}


	return 0;
}


int is_leap_year(int x)
{
	if (x % 4 == 0 && x % 100 !=0 || x % 400 == 0)
	{
		return 1;
	}
	return 0;
}



int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			count++;
			printf("%d ", y);
		}
	}
	printf("\n%d\n", count);

	return 0;
}


int main()
{
	int i = 0;
	for(i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
