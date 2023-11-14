#include "main.h"
/**
 * _strlen - prints the length of the string
 * @str: string
 *
 * Return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlenc - constatnt param
 * @str: arg
 *
 * Return: 1
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
