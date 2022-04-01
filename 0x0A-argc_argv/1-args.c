#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of arguments supplied to the program.
 * @argv: an array of pointers to the arguments.
 * Return: 0 always.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%d\n", argc);

	return (0);
}
