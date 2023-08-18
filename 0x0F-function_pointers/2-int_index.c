#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - returns the index of the first element
 *function does not return 0 If no element matches, return -1
 *@array: integer array
 *@size: number of elements in array
 *@cmp: pointer to function to compare values
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != 0)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);
				a++;
			}
		}
	}
	return (-1);
}
