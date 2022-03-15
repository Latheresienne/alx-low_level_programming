#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: an integer (represent the ASCII code of a character)
 * Description: cheecks for lowercase character.
 * Return: Returns 1 if it is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
