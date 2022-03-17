#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: number of times the character "\" should be printed
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n: a++)
		{
			for (b = 0; b <= a; b++)
			{
				if (b == a)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
}
