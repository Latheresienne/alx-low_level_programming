#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	long max_prime, n, i;

	n = 612852475143;
	max_prime = -1;
	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}
	while (n % 3 == 0)
	{
		max_prime = 3;
		n /= 3;
	}
	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			max_prime = i + 2;
			n /= (i + 2);
		}
	}
	printf("%ld\n", max_prime);
	return (0);
}
