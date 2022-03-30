#include "main.h"

int main_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an integer
 * Return: an integer
 *
 * This function returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recursion(n, 0));
}

/*
 * main_sqrt_recursion - finds the natural square root of a number
 * @n: number we are calculating the root
 * @i: counter
 * This function returns the actual natural square root of @n.
 * Return: an integer.
 */

int main_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (main_sqrt_recursion(n, i + 1));

}
