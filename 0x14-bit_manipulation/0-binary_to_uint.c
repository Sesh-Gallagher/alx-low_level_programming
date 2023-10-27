#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number
 *  to an unsigned int
 *  @b: pointer to string containing binary number
 *
 *  Return: Comverted number on success, or 0 if
 *  there is one or more chars in the string b that is not 0 or 1
 *  b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_valu = 0;
	int a;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimal_valu = 2 * decimal_valu + (b[a] - '0');
	}
	return (decimal_valu);
}
