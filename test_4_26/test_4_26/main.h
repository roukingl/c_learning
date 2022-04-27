#pragma once

#include <stdio.h>
#include <assert.h>
#include <string.h>

//ģ��ʵ��strcpy
char* my_strcpy(char* dest, const char* sou);

//ģ��ʵ��strcat
char* my_strcat(char* dest, const char* sou);

//ģ��ʵ��strcmp
int  my_strcmp(const char* dest, const char* sou);

//ģ��ʵ��strncpy
char* my_strncpy(char* dest, const char* sou, unsigned int count);

//ģ��ʵ��strncat
char* my_strncat(char* dest, const char* sou, unsigned int count);

//ģ��ʵ��strncmp
int my_strncmp(const char* dest, const char* sou, unsigned int count);


