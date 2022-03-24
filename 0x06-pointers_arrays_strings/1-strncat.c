#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: a string
 * @src: a string
 * @n: an integer
 * Description: concatenates strings @dest and @src and store in @dest
 * Return: a string.
 */

char *_strncat(char *dest, char *src, int n)
{
	/*We assume that @dest has enough space to store the result*/
	int j, i = 0;

	j = 0;
	while (*(dest + i) != '\0')
		i++;
	/* Now we are on the '\0' character of @dest */
	while (j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
