#include "main.h"

/**
 * puts2 - prints every other character
 * @str: pointer to string to print
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
