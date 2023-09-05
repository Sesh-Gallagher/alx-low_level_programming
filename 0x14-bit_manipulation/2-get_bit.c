#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: is the index of a bit starting from 0 of any bit result
 * @n: value to be searched for
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int valu_of_bit;

	if (index > 63)
		return (-1);

	valu_of_bit = (n >> index) & 1;

	return (valu_of_bit);
}


