#include <stdio.h>

void __attribute__((constructor)) hare(void);
/**
 * hare - Prints a string before main func
 * is executed.
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
