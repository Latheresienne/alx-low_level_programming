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
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}
	if (n > 2)
		max_prime = n;
	printf("%ld\n", max_prime);
	return (0);
}
