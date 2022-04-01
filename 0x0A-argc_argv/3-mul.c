#include <stdio.h>

/**
 * main - multiplies 2 numbers.
 * @argc: number of arguments passed.
 * @argv: array of pointers to the arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int result, i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
