#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

unsigned int my_strlen(const char* pa)
{
	assert(pa != NULL);
	int count = 0;
	while (*pa++)
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "China";

	int ret = my_strlen(arr);

	printf("%d\n", ret);

	return 0;
}

