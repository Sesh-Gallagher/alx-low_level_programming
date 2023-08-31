#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  pop_listint - function that deletes the head node of a linked list
 *  and returns the head node’s data (n)
 *  @head: poiter to the head of the liked list
 *
 *  Return: if the linked list is empty return 0
 *
 */

int pop_listint(listint_t **head)
{
	int n = 0;

	listint_t *new;

	if (*head != NULL)
	{
		new = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new;
	}

	return (n);
}


