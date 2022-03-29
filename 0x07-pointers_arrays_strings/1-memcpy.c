#include "main.h"

/**
 * _memcpy - copies n characters from memory area src to memory area dest.
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to be copied.
 * Return: a pointer to the memory area @dest.
 *
 * Copies n characters from memory area src to memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptrs, *ptrd;

	for (i = 0; i < n ; i++)
	{
		ptrs = &src[i];
		ptrd = &dest[i];
		*ptrd = *ptrs;

	}
	return (dest);
}
