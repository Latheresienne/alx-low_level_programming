#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: a string
 * @src: a string
 * @n: an integer
 * Description: copy string @src into @dest.
 * Return: a string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	for ( ; i < n; ++i)
		dest[i] = '\0';
	return (dest);
}
