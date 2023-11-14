#include "main.h"
/**
 * print_string - print a string
 * @val: param
 *
 * Return: length of the string
 */
int print_str(va_list args)
{
	char *str;
	int i;
	int len;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
