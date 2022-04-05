#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of a program.
 * @ac: Number of arguments passed to the program
 * @av: Array of pointers to the arguments.
 *
 * Return: NULL if ac == 0, av == NULL, or function fails.
 * Otherwise, a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
