#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: the integer used to be set
 *
 * Return: 1 if sucesss, or -1 if an error occured
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	set = 1;
	*n = *n | (set << index);

	return (1);
}
