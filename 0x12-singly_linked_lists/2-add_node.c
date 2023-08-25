#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginnig of **h
 * @str: new string to be added in the node
 * @head: double pointer to linked list
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	unsigned int len = 0;

	while (str[len])
	len++;

	p = malloc(sizeof(list_t));
	if (!p)
		return (NULL);

	p->str = strdup(str);
	p->len = len;
	p->next = (*head);
	(*head) = p;

	return (*head);
}
