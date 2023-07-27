#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: the source string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, a;

	while (dest[dlen])
	{
		dlen++;
	}

	for (a = 0; src[a] != 0; a++)
	{
		dest[dlen] = src[a];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
