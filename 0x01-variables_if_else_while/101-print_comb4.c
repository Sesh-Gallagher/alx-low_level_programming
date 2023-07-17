#include <stdio.h>

/**
 * main - program that prints combination in three digits
 *
 * Return: 0 on (success)
 */

int main(void)
{
	int h, i, j;

	h = '0';

	while (h <= '7')
	{
		i = h + 1;

		while (i <= '8')
		{
			j = i + 1;

			while (j <= '9')
			{
				putchar(h);
				putchar(i);
				putchar(j);

				if (!(h == '7' && i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}

			i++;
		}

		h++;
	}

	putchar('\n');

	return (0);
}
