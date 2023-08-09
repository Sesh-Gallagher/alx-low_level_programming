#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _Putchar - Writes the character c to a std output
 * @c: The char to print
 *
 * Return: on success 1.
 * on error, -1 is returned, errno is set appropriately
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
