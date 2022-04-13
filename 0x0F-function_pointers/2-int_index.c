#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Array of ints.
 * @size: Size of the array.
 * @cmp: A pointer to the compaare function.
 *
 * Return: -1 if no element matches or size <= 0.
 * Otherwise, the index of the 1st element for which
 * the compare function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
