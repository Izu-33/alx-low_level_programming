#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all parameters
 * @n: The number of parameters passed to the function.
 * @...: Variabale number of arguments.
 *
 * Return: 0 if @n is equal to 0. Otherwise, the sum
 * of all the function parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list ap;

	unsigned int i;
	unsigned int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);

	return (sum);
}
