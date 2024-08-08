#include "search_algos.h"

/**
  * jump_search - Function that searches for a value in a sorted array
  * of integers using jump search.
  * @value: The value to search for.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  */

int jump_search(int *array, size_t size, int value)
{
	size_t a, jump, step;

	if (!array || !size)
		return (-1);

	step = sqrt(size);
	for (a = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		a = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; a < jump && array[a] < value; a++)
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	return (array[a] == value ? (int)a : -1);
}
