#include "main.h"

/**
 * _strcpy - copies string
 * @dest:variable  to copy string to
 * @src: source to copy to
 * Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
