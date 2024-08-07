#include "search_algos.h"

/**
  * interpolation_search - Function that searches for a value in a sorted array
  * of integers using interpolation search.
  * @value: The value to search for.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t a, x, r;

	if (array == NULL)
		return (-1);

	for (x = 0, r = size - 1; r >= x;)
	{
		a = x + (((double)(r - x) / (array[r] - array[x])) * (value - array[x]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			r = a - 1;
		else
			x = a + 1;
	}

	return (-1);
}
