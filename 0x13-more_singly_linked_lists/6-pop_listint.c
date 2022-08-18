#include <stdio.h>
#include "lists.h"


/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to the 1st element of the list
 *
 * Return: head node's data n
 * Otherwise if list is empty return 0
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	{
		return (0);
	}

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
