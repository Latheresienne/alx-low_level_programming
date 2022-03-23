#include "main.h"

/**
 * swap_int - Swap the values of its parameters. 
 * @a: A pointer to an integer
 * @b: A pointer to an integer
 * Description: Swap the values of 0 and b.
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
