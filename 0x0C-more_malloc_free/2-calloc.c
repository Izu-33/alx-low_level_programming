#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: NULL if @nmemb = 0 or @size = 0,
 * or function fails. Otherwise, a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	filler = memory;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (memory);
}
