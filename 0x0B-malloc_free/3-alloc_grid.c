#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - `returns a pointer to a 2 dimensional array of integers
 * @width: number of column
 * @height: number of rows
 * * Return: Pointer in 2 dimiension Array
 */

int **alloc_grid(int width, int height)
{
	int p, q, r, s;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (p = 0; p < height; p++)
	{
		a[p] = malloc(sizeof(int) * width);

		if (a[p] == NULL)
		{
			for (q = p; q >= 0; q--)
			{
				free(a[q]);
			}

			free(a);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (s = 0; s < width; s++)
		{
			a[r][s] = 0;
		}
	}

	return (a);
}
