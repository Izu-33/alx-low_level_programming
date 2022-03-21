#include "main.h"

/**
 * puts_half - prints shalf a string
 * @str: pointer to string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int index = 0;
	int len = 0;
	int n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
