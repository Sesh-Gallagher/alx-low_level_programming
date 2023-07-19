#include "main.h"

/**
 * print_alphabet_x10 - program that prints alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char c = 'a';

	while (num < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');

		num++;
	}
}
