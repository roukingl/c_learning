#define  _CRT_SECURE_NO_WARNINGS 1

#include "main.h"

//模拟实现strcpy函数的定义
char* my_strcpy(char* dest, const char* sou)
{
	assert(dest && sou);
	char* str = dest;
	while (*dest++ = *sou++)
	{
		;
	}
	return str;
}

//模拟实现strcat函数的定义
char* my_strcat(char* dest, const char* sou)
{
	assert(dest && sou);
	char* str = dest;
	while (*dest)
	{
		dest++;
	}

	while (*dest++ = *sou++)
	{
		;
	}
	return str;
}


//模拟实现strcmp函数的定义
int my_strcmp(const char* dest, const char* sou)
{
	assert(dest && sou);

	while ((* dest == *sou))
	{
		dest++;
		sou++;
		if (*dest == '\0' && *sou == '\0')
		{
			return 0;
		}
	}
	return *dest - *sou;
}


//模拟实现strncat函数的定义
char* my_strncpy(char* dest, const char* sou, unsigned int count)
{
	assert(dest && sou);
	char* str = dest;

	while (count-- && (*dest++ = *sou++))
	{
		;
	}
	while (count--)
	{
		*dest++ = '\0';
	}
	return str;
}


//模拟实现strncat函数的定义
char* my_strncat(char* dest, const char* sou, unsigned int count)
{
	assert(dest && sou);
	char* str = dest;

	while (*dest)
	{
		dest++;
	}
	
	while (count--)
	{
		if ((*dest++ = *sou++) == 0)
		{
			return str;
		}
	}
	*dest = '\0';
	
	return str;
}


//模拟实现strncmp函数的定义
int my_strncmp(const char* dest, const char* sou, unsigned int count)
{
	assert(dest && sou);
	while (count--)
	{
		if (*dest > *sou)
		{
			return *dest - *sou;
		}
		else if (*dest < *sou)
		{
			return *dest - *sou;
		}
		dest++;
		sou++;
	}
	return 0;
}

