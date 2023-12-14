#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: accepted Char
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, b;

	while (s[i])
	{
		b = 0;

		while (accept[b])
		{
			if (s[i] == accept[b])
			{
				s += i;
				return (s);
			}

			b++;

		}

		i++;

	}
	return ('\0');
}
