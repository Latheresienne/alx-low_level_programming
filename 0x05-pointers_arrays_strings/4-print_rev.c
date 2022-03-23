#include "main.h"

/**
 * print_rev - prints a string,in reverse, followed by a new line.
 * @s: A pointer to a character
 * Description: Prints a string,in reverse, followed by a new line, to stdout.
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	len--;
	while (*(s + len) != '\0')
	{
		_putchar(*(s + len--));
	}
	_putchar('\n');
}
