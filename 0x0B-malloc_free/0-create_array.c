#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it
 * with a specific char.
 * @size: Size of the array to be initialized.
 * @c: Specific char to initialize the array with.
 *
 * Return: NULL, if size equals 0 or the function fails.
 * Otherwise a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
