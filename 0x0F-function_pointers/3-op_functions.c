#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two integers.
 * @a: First integer to add.
 * @b: Second integer to be added to.
 *
 * Return: The sum of @a and @b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts an integer from another.
 * @a: Integer to be subtracted from.
 * @b: Integer to subtract.
 *
 * Return: The difference of @a and @b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies an int by another.
 * @a: Integer to multply.
 * @b: Integer to be multiplied by.
 *
 * Return: The product of @a and @b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides an int by another.
 * @a: Integer to divide.
 * @b: Integer to be divided by.
 *
 * Return: The result of the division of @a by @b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remainder of division of one int by another.
 * @a: Integer to be divided.
 * @b: Integer to be divided by.
 *
 * Return: Remainder of integer division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
