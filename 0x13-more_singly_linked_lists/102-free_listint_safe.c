#include "lists.h"

/**
 * free_listp2 - Function that frees a linked list
 * @head: pointer to the head of a list.
 *
 * Return: none
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - function that frees a list safely
 * @h: pointer to the head of list
 *
 * Return: size of list to be freed
 */

size_t free_listint_safe(listint_t **h)
{
	listp_t *hptr, *new_node, *add_node;
	listint_t *current;
	size_t count = 0;

	hptr = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = hptr;
		hptr = new_node;

		add_node = hptr;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (*h == add_node->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (count);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		count++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (count);
}
