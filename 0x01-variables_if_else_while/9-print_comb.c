#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		if (a == '9')
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	return (0);
}
