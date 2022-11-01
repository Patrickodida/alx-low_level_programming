#include "main.h"

/**
 * _strspn - length of prefix substring
 * @s: the string to be searched
 * @accept: the prefix to be measured
 *
 * Return: string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int a;

	while (*s)
	{
		for (index = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				bytes++;
				break
			}
			else if (accept[a + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
