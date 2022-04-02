#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: Pointer with the address value
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
