#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: string
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	int i;

	if (*s >= 'a' && *s <= 'z')
	{
		*s = *s - 32;
	}

	for (i = 1; *s != '\0'; i++)
	{
		if (*(s + i) < 'a')
		{
			*(s + i) = *(s + i) + 32;
		}
	}
	return (s);
}
