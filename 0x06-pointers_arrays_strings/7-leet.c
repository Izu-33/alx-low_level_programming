#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i;
	int j;
	char letters[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;
	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == letters[j] || s[i] - 32 == letters[j])
				s[i] = j + '0';
		}

		i++;
	}

	return (s);
}
