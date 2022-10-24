#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: a parameter to _puts function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
