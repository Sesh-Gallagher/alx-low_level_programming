#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - A function that deallocates a singly linked list
 * @list: A pointer to the linked list to be freed
 */

void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
