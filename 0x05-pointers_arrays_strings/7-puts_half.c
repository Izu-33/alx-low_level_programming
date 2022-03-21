#include "main.h"

/**
 * puts_half - prints shalf a string
 * @str: pointer to string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int n;
	int i;

	while (str[n])
	{
		n++;
	}

	if (n % 2 == 1)
	{
		i = (n -1) / 2;
		i = n - 1;
	}
	else
	{
		i = n / 2;
	}

	for (; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
