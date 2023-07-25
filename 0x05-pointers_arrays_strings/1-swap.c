#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: a is integer one to swap
 * @b: b is integer two to swap
 *
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
