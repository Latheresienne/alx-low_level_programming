#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: an integer
 * Return: the list of natural numbers from n to 98, separated by a comma
 * Description: Given an integer n, the function printd all natural numbers ranging from n to 98
 */

void print_to_98(int n)
{
	int i, min, max;

	if (n > 98)
	{
		max = n;
		min = 98;
	}
	else
	{
		max = 98;
		min = n;
	}

	for (i = min; i < max + 1; i++)
	{
		if (i != max)
			printf("%d, ", i);
		else
			printf("%d", i);
	}
	printf("\n");
}
