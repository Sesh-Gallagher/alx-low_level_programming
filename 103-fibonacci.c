#include <stdio.h>
/**
 * main - main function block
 *
 * Description: function Prints the sum of even Fibonacci numbers
 * up to a fibonacci value not exceeding 4000000.
 *
 * Return: void
 */

int main(void)
{
	int a = 1, b = 2, total_num = 0;
	int c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			total_num += b;
		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", total_num);
	return (0);
}
