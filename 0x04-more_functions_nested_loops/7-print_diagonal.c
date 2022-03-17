#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: an integer which represents the number of \ character to print
 * Description: prints a diagonal line on the terminal
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
