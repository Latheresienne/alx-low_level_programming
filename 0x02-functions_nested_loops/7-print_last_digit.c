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

	if (n < 0)
	{
		n *= -1;
	}
	lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
