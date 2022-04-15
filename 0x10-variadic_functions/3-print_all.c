#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to
 * the char to be printed.
 */
void print_char(va_list arg)
{
	printf("%c", (char) va_arg(arg, int));
}

/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to
 * the int to be printed.
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a float.
 * @arg: A list of arguments pointing to
 * the float to be printed.
 */
void print_float(va_list arg)
{
	printf("%f", (float) va_arg(arg, double));
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to
 * the string to be printed.
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}


/**
 * print_all - Prints anything.
 * @format: A list of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";

	op_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].c)))
		{
			j++;
		}

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
