#include "main.h"

/**
 * clear_bit - funct that sets the value of a bit to 0 at a given index
 * @n: integer to be set
 * @index: starting from 0 of the bit you want to set
 * Return: 1 on success, or -1 in an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	set = 1;
	set = set << index;
	set = ~set;
	*n = *n & set;

	return (1);
}
