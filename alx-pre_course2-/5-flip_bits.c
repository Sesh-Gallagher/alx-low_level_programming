#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @m: Second number to be counted
 * @n: first number to be counted
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int currnt;
	unsigned long int exclsv = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		currnt = exclsv >> a;
		if (currnt & 1)
			count++;
	}

	return (count);
}

