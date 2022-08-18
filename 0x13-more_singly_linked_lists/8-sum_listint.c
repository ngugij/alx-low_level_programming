#include <stdio.h>
#include "lists.h"


/**
 * sum_listint - returns the sum of all data(n) in a linked list
 * @head: pointer to the first element of the said list
 *
 * Return: sum
 * Otherwise if list is empty return 0
 */


int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
