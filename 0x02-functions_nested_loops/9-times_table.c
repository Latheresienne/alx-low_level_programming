#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0.
 * No arguments
 * Description: print the 9 times table, starting with 0
 * Return: No value.
 */

void times_table(void)
{
	int i, j, res, firstDigit, lastDigit;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (; j < 10; j++)
		{
			res = i * j;
			firstDigit = res / 10;
			lastDigit = res % 10;
			if (j == 0)
			{
				_putchar(res + '0');
			}
			else
			{
				_putchar(' ');
				if (firstDigit == 0)
					_putchar(' ');
				else
					_putchar(firstDigit + '0');
				_putchar(lastDigit + '0');

			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
