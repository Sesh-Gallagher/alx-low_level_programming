#include <stdio.h>
/**
 * main - A program that prints alphabets in lower and upper case
 *
 * Return: 0
 *
*/
int main(void)
{
	int a, b;

	a = 97;
	b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}

	while (b < 91)
	{
		putchar(b);
		b++;
	}

	putchar(10);

	return (0);
}
