#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be searched.
 * @accept: the set of bytes to be searched for.
 * Return: a pointer to the byte in @s that matches one of
 * the bytes in @accept. Otherwise NULL if no match.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');
}
