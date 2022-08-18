#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to first node in the said list
 * @n: what to insert in the node to be added
 *
 * Return: pointer to new node
 * Otherwise return NULL in case of failure
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
