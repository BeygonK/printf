#include "main.h"
/**
 * _printf - Produces output according to the format
 * @format: paramater
 *
 * Return: Int(number of chars)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					{
					int c = va_arg(args, int);

					write(1, &c, 1);
					count++;
					break;
					}
				case 's':
					{
					char *s = va_arg(args, char *);

					while (*s != '\0')
					{
					write(1, s, 1);
					s++;
					count++;
					}
					break;
					}
				case '%':
					{
					write(1, "%", 1);
					write(1, format, 1);
					count += 2;
					break;
					}
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	
	return (count);
}
