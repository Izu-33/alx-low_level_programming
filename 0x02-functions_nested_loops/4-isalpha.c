#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: character received from main
 * Return: 1 if c is a lowercase or uppercase alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
