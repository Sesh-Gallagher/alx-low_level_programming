#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int z, x, c, next;

	z = 1;

	x = 2;

	for (z = 1; z <= 50; ++z)
	{
		if (x != 20365011074)
		{
			printf("%ld\n", x);
		} else
		{
			printf("%ld\n", x);
		}
		next = x + c;
		x = c;
		c = next;
	}

	return (0);

}
