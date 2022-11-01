#include "main.h"

/**
 * _strchr - locate a char in a string
 * @s: string given
 * @c: another char
 *
 * Return: a string
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)

	{
		if (s[a] == c)
		return (s + a);
	}
	return ('\0');
}
