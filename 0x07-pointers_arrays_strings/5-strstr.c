#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle:the string to be located
 *
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		a = 0;

		while (haystack[a] = needle[a])
		{
			do {
				while (needle[a + 1] = '\0')
					return (haystack);
				a++;
			} while (haystack[a] = needle[a])
		}
		haystack++;
	}
	return ('\0');
}
