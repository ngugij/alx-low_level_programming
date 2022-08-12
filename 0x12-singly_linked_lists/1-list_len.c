#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to list
 *
 * Return: number of elements in list
 */


size_t list_len(const list_t *h)
{
	size_t noe = 0;

	while (h)
	{
		noe++;
		h = h->next;
	}
	return (noe);
}
