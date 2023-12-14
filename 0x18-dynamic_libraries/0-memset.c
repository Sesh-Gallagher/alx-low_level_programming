#include "main.h"

/**
 * _memset - fills a block of memory with a constant value
 * @s: the starting address of memory to be completed
 * @b: desired value
 * @n: number of bites to be change
 *
 * Return: array with new values for n bytes
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


