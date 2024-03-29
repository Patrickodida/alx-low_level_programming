#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string to be returned
 *
 * Return: a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
