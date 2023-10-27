#include "main.h"

/**
 * print_binary - function that prints the binary
 * reprisentation of a number
 * @n: integer to be represented in binary
 *
 * Return: void
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int rept;
	int strt, a = 0;

	strt = 0;
	for (a = 63; a >= 0; a--)
	{
		rept = (n >> a) & 1;
		if (rept == 1)
			strt = 1;
		if (strt == 1)
			_putchar(((n >> a) & 1) + '0');
		}
	if (n == 0)
		_putchar('0');
}

