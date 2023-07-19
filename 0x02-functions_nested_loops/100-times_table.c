#include "main.h"
#include <stdio.h>

/**
 * main -  function that prints the n times table, starting with 0.
 * If n is < than 15 or > than 0 the function should not print anything
 *
 * print_times_table - program that prints the n times table, starting with 0.
 *
 * Return: Always 0 (success)
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

	int main(void)
	{
		int size = 5;

		print_times_table(size);

		return (0);
	}

