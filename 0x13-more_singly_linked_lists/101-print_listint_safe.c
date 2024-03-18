#include "lists.h"
#include <stdio.h>

/**
 * free_listp - Function that frees a linked list safely
 * @head: pointer to the head of a list.
 *
 * Return: no return.
 */

void free_listp(listp_t **head)
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
 * print_listint_safe - Function that prints linked list
 * @head: pointer to the head of list
 *
 * Return: number of nodes in a linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	listp_t *hptr, *new_node, *add_node;
	size_t count = 0;

	hptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = hptr;
		hptr = new_node;

		add_node = hptr;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (head == add_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	free_listp(&hptr);
	return (count);
}
