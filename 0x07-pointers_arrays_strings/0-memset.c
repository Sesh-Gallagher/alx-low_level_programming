#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string array
 * @b: byte
 * @n: number of bytes
 *
 * Return: string
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
