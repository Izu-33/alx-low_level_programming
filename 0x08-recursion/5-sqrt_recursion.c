#include "main.h"

/**
 * find_sqrt - finds natural square root of a number.
 * @num: the number to find the square root of.
 * @root: the root to be tested.
 * Return: the square root if @num has a natural square root. Otherwise -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to return square root of.
 * Return: natural square root of @n if it has a natural square root,
 * otherwise return -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
