#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() 
{
	int x = 3;
	do {
		printf("%d\n", x -= 2);
	} while (!(--x));
	return 0;
}