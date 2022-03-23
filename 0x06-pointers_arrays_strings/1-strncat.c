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
	if ((dest == NULL) && (src == NULL))
		return NULL;

	char *start = dest;

	while (*start != '\0')
	{
		start++;
	}

	while (n--)
	{
		if (!(*start++ = *src++))
		{
			return (*start);
		}
	}
	*start = '\0';
	return (dest);
}
