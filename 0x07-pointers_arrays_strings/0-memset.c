#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled.
 * @b: value to be filled
 * @n: number of bytes to be filled starting from @s to be filled
 * Return: a pointer to the memory area @s.
 *
 * This function fills the first @n bytes of the memory
 * area pointed to by @s with the constant byte @b.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr;

	for (i = 0; i < n ; i++)
	{
		ptr = &s[i];
		*ptr = b;
	}
	return (s);
}
