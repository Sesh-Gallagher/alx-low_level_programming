#include "main.h"


/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first integer to be counted
 * @m: second integer to be counted
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int sum;

	sum = 0;
	flip = n ^ m;
	while (flip)
	{
		sum += flip & 1;
		flip = flip >> 1;
	}
	return (sum);
}
