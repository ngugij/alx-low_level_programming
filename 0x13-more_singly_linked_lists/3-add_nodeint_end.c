#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: pointer to first node of said list
 * @n: what to be inserted in the new node
 *
 * Return: pointer to the new node
 * Otherwise return NULL in case of failure
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;

	return (node);
}
