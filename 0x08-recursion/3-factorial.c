#include "main.h"

/**
 * factorial - return factorial of a given number
 * @n: integer
 *
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
