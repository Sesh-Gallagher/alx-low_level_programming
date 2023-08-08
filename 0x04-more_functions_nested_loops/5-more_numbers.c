#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int line, i, repeat, limit;

	i = '0';
	repeat = 0;
	limit = '9';

	for (line = 0; line < 10; line++)
	{
		while (repeat < 2)
		{
			while (i <= limit)
			{
				if (limit == '4')
					_putchar('1');
				_putchar(i);
				i++;
			}
			repeat++;
			limit = '4';
			i = '0';
		}
		_putchar('\n');
		repeat = 0;
	}	i = '0';
		limit = '9';
}

