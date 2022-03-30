#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be evaluated.
 * Return: the factorial of @n, or 1 if @n is zero, otherwise
 * -1 if @n is less than zero.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
