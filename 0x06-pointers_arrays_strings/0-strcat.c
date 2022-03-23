#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	if ((dest == NULL) && (src == NULL))
		return NULL;

	char *start = dest;

	while (*start != '\0')
	{
		start++;
	}

	while (*src != '\0')
	{
		*start++ = *src++;
	}

	*start = '\0';
	return (dest);
}
