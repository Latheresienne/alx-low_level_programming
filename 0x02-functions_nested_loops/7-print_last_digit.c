#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: an integer
 * Description: print the last digit of a number
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	int lastDigit;
	long n2 = n;

	if (n < 0)
	{
		n2 *= -1;
	}
	lastDigit = n2 % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
