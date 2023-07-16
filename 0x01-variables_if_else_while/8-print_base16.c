#include <stdio.h>

/**
 * main - prints numbers with base 16  in lower case
 * Return: 0
 */
int main(void)
{

	int p = 0;

	while (p < 48)
	{
		if (p < 10)
			putchar(p + '0');
		else if (p > 41)
			putchar(p - 10 + 'A');
		p++;
	}
	putchar('\n');
	return (0);
}
