#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: the matrix of int
 * @size: the size of int
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int k, sum1 = 0, sum2 = 0;

	for (k = 0; k < size; k++)
	{

	sum1 += a[(size + 1) * k];
	sum2 += a[(size - 1) * (k + 1)];

	}

	printf("%d, %d\n", sum1, sum2);

}

