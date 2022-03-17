#include "main.h"

/**
 * more_numbers - Prints 0 to 14 ten times
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10: a++)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
			b++;
		}
		_putchar('\n');
	}
}
