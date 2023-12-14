#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: character to checked for digit membership
 *
 * Return: 1 if digit, 0 if not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
