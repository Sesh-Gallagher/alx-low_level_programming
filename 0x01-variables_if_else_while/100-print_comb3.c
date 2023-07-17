#include <stdio.h>

/**
 * main - program to print combo of two digits
 *
 * Return: 0 on (Success)
 */
int main(void)
{
	int a, b;

	a = 0;
	b = 1;

	while (a <= 8)
	{
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		b = a + 2;
		a++;

	}

	putchar(10);

	return (0);
}
