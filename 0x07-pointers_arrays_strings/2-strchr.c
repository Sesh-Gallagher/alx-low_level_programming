#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be searched
 *
 * Return: 0 (success)
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);

	}

	return (0);

}
