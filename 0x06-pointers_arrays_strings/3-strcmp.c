#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 1, 0, or -1
 */
int _strcmp(char *s1, char *s2)
{
	int charCompareStatus = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	charCompareStatus = (*s1 == *s2)?0:(*s1 > *s2)?1:-1;
	return (charCompareStatus);
}
