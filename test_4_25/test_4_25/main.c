#define  _CRT_SECURE_NO_WARNINGS 1

#include "main.h"

unsigned int my_strlen(const char* str)
{
	assert(str);
	unsigned int count = 0;
	while (*str++ != '\0')
	{
		count++;
	}

	return count;
}
