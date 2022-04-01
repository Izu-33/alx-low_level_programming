#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: count of all arguments passed.
 * @argv: array of pointers to the arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count = 0;

	for (; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
