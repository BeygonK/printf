#include "main.h"
/**
 * print_char - prints characters
 * @val: paramater
 *
 * Return: (1);
 */
int print_char(va_list val)
{
	char string;

	string = va_arg(val, int);
	_putchar(string);
	return (1);
}
