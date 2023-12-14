#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 *
 * Return: String.
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}
