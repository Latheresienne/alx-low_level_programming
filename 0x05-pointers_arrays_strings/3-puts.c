#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: A pointer to a character
 * Description: Prints a string, followed by a new line, to stdout.
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i++));
	}
	_putchar('\n');
}
