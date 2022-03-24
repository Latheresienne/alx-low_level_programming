#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: a string
 * @src: a string
 * Description: concatenates strings @dest and @src and store in @dest
 * Return: a string.
 */

char *_strcat(char *dest, char *src)
{
	/*We assume that @dest has enough space to store the result*/
	int j, i = 0;

	j = 0;
	while (*(dest + i) != '\0')
		i++;
	/* Now we are on the '\0' character of @dest */
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
