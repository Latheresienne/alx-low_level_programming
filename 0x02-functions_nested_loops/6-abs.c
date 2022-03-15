#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: an integer
 * Description: Computes the absolute value of an integer.
 * Return: compute value.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	unsigned int res = n * (-1);

	return (res);
}
