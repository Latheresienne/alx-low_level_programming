#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: A pointer to a character.
 * Description : returns the length of its parameter.
 * Return: an integer.
 */

int _strlen(char *s)
{
	int res;

	res = 0;
	while (*(s + res) != '\0')
		res++;
	return (res);
}
