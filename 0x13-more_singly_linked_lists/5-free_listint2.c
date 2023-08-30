#include "lists.h"

/**
* free_listint2 -  a function that frees a listint_t list.
*@head: ponter to the header of the linked list
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

