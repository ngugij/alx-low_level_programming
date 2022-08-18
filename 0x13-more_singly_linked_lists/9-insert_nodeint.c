#include <stdio.h>
#include "lists.h"



/**
 * insert_nodeint_at_index - inserts a new node at a given posititon
 * @head: the 1st element in the list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in the node
 *
 * Return: address of the new node
 * Or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
