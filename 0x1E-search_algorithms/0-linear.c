#include "search_algos.h"

/**
 * linear_search - function that searches for a value in
 *  an array of integers using the Linear search
 *  @size:  is the number of elements in array
 *  @array: pointer to the firt element
 *  @value: is the value to search for
 *
 *  Return: If value is not present in array or if array is NULL,
 *   your function must return -1
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size, a++)
	{
		printf("value checked array[%1d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);

	}

	return (-1);
}
