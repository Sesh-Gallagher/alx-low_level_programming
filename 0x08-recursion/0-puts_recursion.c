#include "main.h"


/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: the string to be printed
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);

}
