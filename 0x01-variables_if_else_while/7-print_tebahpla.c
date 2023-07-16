#include <stdio.h>
/**
 * main - alphabets in reverse displayed in lower case
 * Return: 0
 */
int main(void)
{
	int p;

	p = 122;
	while (p > 96)
	{
		putchar(p);
		p--;
	}
	putchar('\n');
	return (0);
}

