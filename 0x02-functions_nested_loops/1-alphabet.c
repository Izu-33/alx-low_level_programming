#include "main.h"

/**
 * print_alphabet - Prints alphabet in lower case followed by a new line
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
