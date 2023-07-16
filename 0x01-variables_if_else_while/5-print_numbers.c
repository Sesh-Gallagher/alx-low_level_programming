#include <stdio.h>
/**
 * main - program that prints numbers of base 10 from 0
 * Return: 0
 */
int main(void)
{
	int v;

	v = 48;
	while (v < 58)
	{
		putchar(v);
		v++;
	}
	putchar (10);
	return (0);
}
