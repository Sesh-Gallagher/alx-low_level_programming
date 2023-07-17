#include <stdio.h>

/**
 * main - program that prints combination in three digits
 *
 * Return: 0 on (success)
 */

int main(void)
{
	int h, i, j;

	h = 48;
	i = 48;
	j = 48;

	while (h < 58)
	{
		i = h + 1;
		while (j < 58)
		{
			j = i + 1;
			while (j < 58)
			{
				putchar(h);
				putchar(i);
				putchar(j);
				if (h < 55 || i < 56 || j < 57)
				{
					putchar(44);
					putchar(32);
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
