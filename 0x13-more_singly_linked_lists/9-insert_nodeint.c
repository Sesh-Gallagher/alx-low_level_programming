#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - func that inserts a new node at a given position
 * @head: First node of linked listr
 * @n: integer to be insterted
 * @idx: index data to be inserted
 *
 * Return: address of the new node, or NULL if it failed
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *itr;

	unsigned int count;

	count = 1;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		if (idx > 0)
		{
			itr = *head;
			while (itr)
			{
				if (count == idx)
				{
					new_node->next = itr->next;
					itr->next = new_node;
					return (new_node);
				}
				itr = itr->next;
				count++;
			}
			if (idx > count)
				return (NULL);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
