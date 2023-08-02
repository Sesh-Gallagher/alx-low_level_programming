#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: the string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("%c", '\n');
	}
	else
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}

/**
 * main - Entrt point of the program
 *
 * Return: Always 0 on successful execution
 *
 */

int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
