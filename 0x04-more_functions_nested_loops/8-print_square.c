#include "main.h"

/**
 * print_square - prints a square
 * @size: an integer which represents the number of # character to print
 * Description: prints a square on the terminal
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
