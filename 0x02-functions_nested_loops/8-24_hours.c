#include "main.h"

/**
 *jack_bauer - print evry minute of jacks's day starting form
 * starting from 0:00 - 23:00
 *
 */
void jack_bauer(void)
{
	int b, c;

	b = 0;

	while (b < 24)
	{
		c = 0;

		while (c < 60)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			c++;
		}
		b++;
	}

}
