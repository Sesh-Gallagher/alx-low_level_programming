#include <stdio.h>

/**
 *main - print single numbers separated by commas
 *Return: 0
 */
int main(void)
{
	int p;

	p = 48;
	while (p < 58)
	{
		putchar(p);
		if (p != 57)
		{
			putchar(44);
			putchar(32);
		}
		p++;
	}
	putchar('\n');
	return (0);
}
