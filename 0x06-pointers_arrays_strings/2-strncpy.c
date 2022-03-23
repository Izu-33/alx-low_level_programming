#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: copied strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	if ((dest == NULL) && (src == NULL))
		return NULL;

	char *start = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
