#include "main.h"

/**
 * _strspn - gets the length of a prefix string
 * @s: first parameter in the function
 * @accept: second parameter in the function
 * Return: an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			bytes++;
			break;
		}
		else if (accept[i + 1] == '\0')
		{
			return (bytes);
		}

		s++;
	}

	return (bytes);
}
