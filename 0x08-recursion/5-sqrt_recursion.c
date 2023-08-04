#include "main.h"

int actual_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: integer to calculate the square root of the natural number
 *
 * Return: integer square root value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the square root of
 * the number
 * @n: integer to calculate the square root of naturak number
 * @a: iterator
 *
 * Return: square root value
 */
int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}

