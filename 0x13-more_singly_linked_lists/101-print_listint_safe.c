#include <stdio.h>
#include "lists.h"


/**
 * real - reallocates memory to the nodes in a list
 * @old: old list
 * @size: size of new list
 * @new: node to append to new list
 *
 * Return: pointer to new list
 */

const listint_t **real(const listint_t **old, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(old);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
	{
		newlist[i] = old[i];
	}
	newlist[i] = new;
	free(old);
	return (newlist);
}



/**
 * print_listint_safe - prints a linked list
 * @head: pointer
 *
 * Return: number of nodes in the list
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **old = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == old[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(old);
				return (num);
			}
		}
		num++;
		old = real(old, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(old);
	return (num);
}
