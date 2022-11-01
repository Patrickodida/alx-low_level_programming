#include "main.h"

/**
 * _memcpy - copy memory area
 * @src: source
 * @dest: destination
 * @n: number of bytes
 *
 * Return: a string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)

		dest[a] = src[a];

	return (dest);
}
