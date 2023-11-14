#include "main.h"
/**
 * print_int - prints integer
 * @args: argument ot print
 *
 * Return: number of characters
 */
int print_int(va_list args)
{

	int n = va_arg(args, int);
	int num, i, end = n % 10, digit, exp = 1;

	i = 1;
	n = n / 10;
	num = n;

	if (end < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		end = -end;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(end + '0');

	return (i);
}

/**
 * print_dec - prints decimal
 * @args: args to print
 *
 * Return: no. of chars
 */
int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, i, end = n % 10, digit, exp = 1;
	
	i = 1;
	n = n / 10;
	num = n;
	
	if (end < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		end = -end;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
                }
        }
        _putchar(end + '0');
	return (i);
}
