#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n : n is the integer to check
 *
 * Return: 1 (if posetive), 0(if zero), -1(if negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
i