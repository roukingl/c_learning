#pragma once

#include <stdio.h>
#include <assert.h>
#include <string.h>

//模拟实现strcpy
char* my_strcpy(char* dest, const char* sou);

//模拟实现strcat
char* my_strcat(char* dest, const char* sou);

//模拟实现strcmp
int  my_strcmp(const char* dest, const char* sou);

//模拟实现strncpy
char* my_strncpy(char* dest, const char* sou, unsigned int count);

//模拟实现strncat
char* my_strncat(char* dest, const char* sou, unsigned int count);

//模拟实现strncmp
int my_strncmp(const char* dest, const char* sou, unsigned int count);


