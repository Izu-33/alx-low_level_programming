#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long long int n;
	unsigned long long int div;
	unsigned long long int ans;
	unsigned long long int maxFact;
	
	n = 612852475143;
	div = 2;
	ans = 0;
	while (n != 0)
	{
		if ((n % div) != 0)
		{
			div += 1;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%llu\n", maxFact);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}
