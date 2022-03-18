#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: an integer (represent the ASCII code of a character)
 * Description: cheecks for uppercase character.
 * Return: Returns 1 if it is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
