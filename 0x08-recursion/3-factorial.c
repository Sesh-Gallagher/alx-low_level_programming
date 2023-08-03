#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * factorial - function that returns the integer of a given number
 * @n: The factorial to be given
 *
 * Return: integer factorial value
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
