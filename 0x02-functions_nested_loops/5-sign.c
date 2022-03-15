#include "main.h"

/**
 * _print_sign - prints the sign of a number
 * @n: an integer
 * Description: prints the sign of a number
 * Return: 1,0 or -1
 * Case 1 - return 1 and prints + if n is greater than zero,
 * Case 2 - return 0 and prints 0 if n is zero,
 * Case 3 - return -1 and prints - if n is less than zero.
 */

int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}

}
