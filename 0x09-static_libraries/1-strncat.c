#include "main.h"

/**
 * _strncat - concatenates 2 strings using at most n bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes to be used
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
