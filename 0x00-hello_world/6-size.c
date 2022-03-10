#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of a char: %lu byte(s)", sizeof(c));
	printf("Size of an int: %lu byte(s)", sizeof(i));
	printf("Size of a long int: %lu byte(s)", sizeof(a));
	printf("Size of a long long int: %lu byte(s)", sizeof(b));
	printf("Size of a float: %lu byte(s)", sizeof(f));

	return (0);
}
