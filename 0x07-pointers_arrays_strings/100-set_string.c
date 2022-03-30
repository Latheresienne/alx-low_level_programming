#include "main.h"

/**
 * set_string - sets the value of the a pointer to a char.
 * @s: a pointer to a pointer.
 * @to: what the pointer will point to.
 * Return: nothing.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
