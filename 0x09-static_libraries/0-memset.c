#include "main.h"

/**
 * _memset - the function fills memory with a constant byte
 * @s: pointer to variable n
 * @b: value to be filled
 * @n: number of bytes to be filled starting from s
 *
 * Return: a pointer to the memory area of variable s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
