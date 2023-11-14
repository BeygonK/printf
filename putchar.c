#include "main.h"
/**
 * _putchar - prints the functon
 * @c: char to print
 *
 * Return: ON success 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
