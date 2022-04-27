#define  _CRT_SECURE_NO_WARNINGS 1

#include "main.h"

//ģ��ʵ��strcpy�����Ķ���
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

//ģ��ʵ��strcat�����Ķ���
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


//ģ��ʵ��strcmp�����Ķ���
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


//ģ��ʵ��strncat�����Ķ���
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


//ģ��ʵ��strncat�����Ķ���
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


//ģ��ʵ��strncmp�����Ķ���
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

