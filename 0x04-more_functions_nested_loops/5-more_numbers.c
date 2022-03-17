#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * No arguments
 * Description: prints 10 times the numbers form 0 to 14
 */

void more_numbers(void)
{
	int i, j, fDigit, lDigit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			lDigit = j % 10;
			if (j >= 10)
			{
				fDigit = j / 10;
				_putchar(fDigit + '0');
			}
			_putchar(lDigit + '0');
		}
		_putchar('\n');
	}
}
