#include "main.h"

/**
 * puts2 - function that prints the character of a string
 * @str: string for function
 *
 * return: void
 */

void puts2(char *str)
{
	int a;
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}

	for (a = 0; a < k; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
