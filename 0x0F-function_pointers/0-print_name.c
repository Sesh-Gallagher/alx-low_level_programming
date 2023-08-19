#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: String of array to be printed as name
 * @f: The pointer to function to bo used
 *
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;


	f(name);

}
