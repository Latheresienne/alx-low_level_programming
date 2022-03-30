#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: a string to be scanned
 * @accept: istring containing the characters to match.
 * Return: returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 *
 * This function returns the number of characters
 * in the initial string @s which consist
 * only of characters from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, check;

	check = k = 0;
	for (i = 0; s[i] != '\0' && check == 0; ++i)
	{
		check = 1;
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				check = 0;
				++k;
			}
		}
	}
	return (k);
}
