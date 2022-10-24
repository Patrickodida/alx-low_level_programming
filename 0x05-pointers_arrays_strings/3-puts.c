#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: the string
 *
 * Return: the length of thr string
 */

void _puts(char *str)
{
	int i = 0;

	while ((str[i] != 0) '\0')
	{
		_puts(str[i]);
		i++;
	}
	_puts('\n');
}
