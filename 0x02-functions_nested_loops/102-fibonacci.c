#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return:  0
 */

int main(void)
{
	int num_count = 2;
	long int a = 1, b = 2;
	long int c;

	printf("%lu, ", a);
	while (num_count <= 50)
	{
		if (num_count == 50)
		{
			printf("%lu\n", b);
		}
		else
		{
			printf("%lu, ", b);
		}

		c = b;
		b += a;
		a = c;
		num_count++;
	}

	return (0);
}
