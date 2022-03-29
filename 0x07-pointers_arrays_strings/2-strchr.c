#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: a character we are looking for in @s
 * Return: a pointer to the first occurence of @c.
 *
 * This function returns a pointer to the first occurence
 * of the caracter @c in the string @s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != c)
		{
			i++;
			continue;
		}
		ptr = &s[i];
		break;
	}
	return (ptr);
}
