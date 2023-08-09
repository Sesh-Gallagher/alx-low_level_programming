#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: number of bytes in src
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, b = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (b < n && src[b])
	{
		dest[dlen] = src[b];
		dlen++;
		b++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
