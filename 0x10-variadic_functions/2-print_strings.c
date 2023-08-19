#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: The string to be printed
 * @n: The number of strings
 * @...: A variable number of strings
 *
 * Description: If separator is NULL, Do not print.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *c;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		c = va_arg(strings, char *);

		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

