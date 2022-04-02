#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string to be searched
 * @c: character to be searched for
 * Return: a pointer to the first occurrence of the character in the string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
