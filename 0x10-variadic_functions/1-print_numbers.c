#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: The string to be printed.
 * @n: The integers to be passed to the function.
 * @...: A variable of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbrs;
	unsigned int index;

	va_start(numbrs, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbrs, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbrs);
}

