#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @j: number to be checked
 * @i: variable to hold last digit
 * Return: i
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
