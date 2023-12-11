#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - a function that returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: Pointer to the head of the dbly linked list
 *
 * Description: Returns the sum of all the data (n) of a dlistint_t list.
 *
 * Return: sum of all the data or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
