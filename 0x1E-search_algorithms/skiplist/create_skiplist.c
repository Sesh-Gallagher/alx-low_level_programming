#include <stdlib.h>
#include <math.h>
#include "../search_algos.h"

void free_skiplist(skiplist_t *list);

/**
 * init_express - Function initializes the express lane of the linked list
 *
 * @list: The pointer to the head node of the list
 * @size: Number of nodes in the list
 */

void init_express(skiplist_t *list, size_t size)
{
	const size_t step = sqrt(size);
	size_t a;
	skiplist_t *save;

	for (save = list, a = 0; a < size; ++a, list = list->next)
	{
		if (a % step == 0)
		{
			save->express = list;
			save = list;
		}
	}
}

/**
 * create_skiplist - Function that create a single linked list
 * @array: The pointer to the array used to fill the list
 * @size: Size of the array
 *
 * Return: pointer to the head of the created list (NULL on failure)
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *list;
	skiplist_t *node;
	size_t save_size;

	list = NULL;
	save_size = size;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_skiplist(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->express = NULL;
		node->next = list;
		list = node;
	}
	init_express(list, save_size);
	return (list);
}
