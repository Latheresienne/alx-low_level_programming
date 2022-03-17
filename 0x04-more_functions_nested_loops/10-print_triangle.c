#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: an integer which represents the size of the triangle
 * Description: prints a triangle on the terminal
 */

void print_triangle(int size)
{
	int i, j, k, limit;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		limit = size - (i + 1);
		for (j = 0; j < limit; j++)
			_putchar(' ');
		for (k = limit; k < size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
