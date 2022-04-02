#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: Pointer with address value
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
