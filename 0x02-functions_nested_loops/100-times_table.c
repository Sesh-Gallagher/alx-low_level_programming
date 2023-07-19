#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the times table for a given value of n.
 * The function prints the multiplication table from 0 to n.
 *
 * @n: The upper bound for the times table (0 to 15).
 *
 */

void print_times_table(int n)
{

	if (n < 0 || n > 15)
	{
		printf(" \n");
		return;
	}

int a, b;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			int result = a * b;

			printf("%d", result);

			if (b != n)
				printf(",\t");
		}

		printf("\n");
	}
}


/**
 * main - program that gives you the multiples of n
 * print_times_table - Prints the times table for a given value of n.
 *
 * Description: The function calls the print_times_table with a size of n
 *
 * Return: 0 (success)
 */

int main(void)
{

	int size = 5;

	print_times_table(size);

	return (0);
}
