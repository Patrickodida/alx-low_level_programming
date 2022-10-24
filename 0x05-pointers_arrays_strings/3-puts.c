#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str++);
	}
	_puts('\n');
}
