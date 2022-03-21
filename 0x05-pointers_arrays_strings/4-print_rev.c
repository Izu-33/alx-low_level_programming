#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer to string to print
 * Return: nothing
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}

	count--;

	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
