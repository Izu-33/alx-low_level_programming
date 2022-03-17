#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a;
	int b;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b <= a)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
