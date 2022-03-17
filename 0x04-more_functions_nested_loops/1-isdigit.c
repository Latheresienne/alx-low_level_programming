#include "main.h"

/**
 * _isdigit - checks for digit character
 * @c: an integer (represent the ASCII code of a character)
 * Description: checks for digit character.
 * Return: Returns 1 if it is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
