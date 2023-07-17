#include <stdio.h>

/**
 * main - program that prints combination of 3 digits.
 *
 * Return: 0 on (success)
 */

int main(void)
{
	int a, b, c, d;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			d = b +	1;
			c = a;
			while (c < 10)
			{
				while (d < 10)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a < 9 || b < 8 || c < 9 || d < 9)
					{
						putchar(',');
						putchar(' ');
					}

					d++;

				}

				d = 0;
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
