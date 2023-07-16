#include <stdio.h>

/**
 * main - prints letter of alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	int z = 97;

	while (z < 123)
	{
		if (z != 101 && z != 113)
		{
			putchar(z);
		}
		z++;
	}
	putchar(10);
	return (0);
}
