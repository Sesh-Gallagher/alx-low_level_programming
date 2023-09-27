#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 for big, 1 for small
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *i = (char *) &a;

	return (*i);
}

