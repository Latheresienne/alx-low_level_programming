#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0.
 * No arguments
 * Description: print the 9 times table, starting with 0
 * Return: No value.
 */

void times_table(void)
{
	int i, j, res, firstDigit;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (; j < 10; j++)
		{
			res = i * j;
			while (res >= 10)
			{
				firstDigit = res / 10;
				_putchar(firstDigit + '0');
				res -= firstDigit * 10;
			}
			_putchar(res + '0');
			if (j == 9)
				_putchar('$');
			else
				_putchar(',');
		}
		_putchar('\n');
	}
}
