#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first characte.
 * @str: A string
 * Description: prints every other character.
 */

void puts2(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
