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

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				count++;
			}

			else if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				count++;
			}

			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int string_lenght = 0;

				while (str[string_lenght] != '\0')
					string_lenght++;
				write(1, str, string_lenght);

				count += string_lenght;
			}
		}
		format++;
	}

	va_end(args);

	return (count);
}
