#include <stdio.h>
/**
 * main - a  program that prints alphabets in lower case
 * Return: 0
 */
int main(void)
{
	int z = 97;

	while (z < 123)
	{
		putchar(z);
		z++;
	}
	putchar(10);
	return (0);
}
