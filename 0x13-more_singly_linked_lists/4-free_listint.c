#include "lists.h"
#include <stdio.h>

/**
*free_listint - function that frees a listint_t list.
*@head: pointer to head of list to be freed
*
*/

void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}

