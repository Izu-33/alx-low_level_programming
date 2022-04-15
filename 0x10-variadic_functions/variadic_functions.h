#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct op - Struct op.
 * @c: The sybole representing a data type.
 * @print: Pointer to a function that prints a 
 * data type corresponding to a symbol.
 */
typedef struct op
{
	char *c;
	void (*print)(va_list arg);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
