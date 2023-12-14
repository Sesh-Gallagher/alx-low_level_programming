#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to search
 * @needle: string to be found
 *
 * Return: 0.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}

	return ('\0');
}
