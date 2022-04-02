#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
