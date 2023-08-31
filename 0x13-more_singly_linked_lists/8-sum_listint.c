#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *sum_listint - function that returns the sum of all the data (n)
 * a listint_t linked list.
 * @head: top/head or first node of the linked list
 *
 * Return: result as a sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}

