#include "main.h"

/**
 * print_number - print an integer
 * @n: The integer we want to print
 * Description: A function that prints a given integer
 * Return: No value.
 */

void print_number(int n)
{
	int i, aDigit, numbDigit, m10, res, aux, special;

	/* Negative integer */
	if (n < 0)
	{
		_putchar('-');
		n *= (-1);
		if (n == INT_MIN)
		{
			special = 1;
			n = (n + 1) * (-1);
		}
	}
	/* finds the number of digits */
	numbDigit = 1;
	m10 = 10;
	aDigit = n % 10;
	while (n - aDigit != 0)
	{
		m10 *= 10;
		aDigit = n % m10;
		numbDigit++;
	}
	m10 /= 10;
	for (i = numbDigit; i > 0; i--)
	{
		res = n / m10;
		aux = res * m10;
		n -= aux;
		if (i == 1 && special == 1)
		{
			res += 1;
			_putchar(res + '0');
		}
		else
			_putchar(res + '0');
		m10 /= 10;
	}
}
