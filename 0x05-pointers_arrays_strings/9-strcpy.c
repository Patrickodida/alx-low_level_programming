#include "main.c"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char to check
 * @src: char to check
 *
 * Return: 0 success
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;
	do{
		int i = -1;
		dest[i] = src[i];
	}
	while (src[i] != '\0');

	return (dest);
}
