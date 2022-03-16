#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 * No arguments.
 * Description: Prints tha alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
	int i, j;

	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
			_putchar(letters[j]);
		_putchar('\n');
	}
}
