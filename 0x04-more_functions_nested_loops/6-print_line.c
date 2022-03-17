#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: an integer which represents the number of _ character to print
 * Description: prints a straight line in the terminal
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
