#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 * @s: string to be searched
 * @accept: the set of bytes to be searched
 *
 * Return: a string
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
