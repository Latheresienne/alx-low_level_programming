#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: A string
 * Description: prints half of a string.
 */

void puts_half(char *str)
{
	int len, i, start;

	len = 0;
	/*Gets the length of the string*/
	while (str[len] != '\0')
	{
		len++;
	}
	/*Do the actual task*/
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2;
	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
