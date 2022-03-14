#include <stdio.h>

#define MAX_LIM 9
#define COMMA_SPACE 7

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= MAX_LIM; a++)
	{
		for (b = a + 1; b <= MAX_LIM; b++)
		{
			for (c = b + 1; c <= MAX_LIM; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (a < COMMA_SPACE)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
