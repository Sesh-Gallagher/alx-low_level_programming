#include <stdio.h>

/**
 * main - prints numbers from 0-16 in lower case
 * Return: 0
 */
int main(void)
{

	int p = 0;

	while (p < 48)
	{
		if (p < 10)
			putchar(p + '0');
		p++;
	}
	putchar('\n')
	return (0)
}
