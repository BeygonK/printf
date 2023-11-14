#include "main.h"
/**
 * _printf - Produces output according to the format
 * @format: paramater
 *
 * Return: Int(number of chars)
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", print_char}, {"%s", print_str}, {"%%", print_per},
		{"%i", print_int}, {"%d", print_dec}
	};
	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[i] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[i] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);

	return (len);
}
