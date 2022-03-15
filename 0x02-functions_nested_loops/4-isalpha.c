#include "main.h"

/**
 * _isalpha - checks for alphabatic character
 * @c: an integer (represent the ASCII code of a character)
 * Description: checks for alphabetic character.
 * Return: Returns 1 if it is a letter (lowercase or uppercase) or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 91))
		return (1);
	else
		return (0);
}
