#include "main.h"

/**
 * _print_rev_recursion - print strings in reverse
 * @s: a string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
