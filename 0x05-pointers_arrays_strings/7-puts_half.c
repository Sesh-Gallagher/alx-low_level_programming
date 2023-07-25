#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 *
 * return: void
 */

void puts_half(char *str)
{
	int a, b, max;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	max = a;
	b = max / 2;
	while (b <= max)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
