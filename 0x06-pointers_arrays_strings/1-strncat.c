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
	int a;
	int len  = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < n && src[a] != '\0' ; a++)
		dest[len + a] = src[a];
	dest[len + a] = '\0';

	Return (dest);
}
