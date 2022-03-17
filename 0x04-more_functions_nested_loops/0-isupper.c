#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: character to be checked
 * Retrun: 1 if c is uppercase. Otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
