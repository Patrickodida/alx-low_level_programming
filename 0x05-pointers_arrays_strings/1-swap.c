#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: Always 0 Success
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
