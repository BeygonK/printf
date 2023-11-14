#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int(*f)();
}match;
int _putchar(char c);
int print_char(va_list val);
int _printf(const char *format, ...);
int print_str(va_list args);
int _strlen(char *str);
int _strlenc(const char *str);
int print_per(void);
int print_int(va_list arg);
int print_dec(va_list args);
#endif
