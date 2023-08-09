#include "main.h"

/**
 * _puts - the function that prints a string followed by a new line
 * @str: string
 *
 * return: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
