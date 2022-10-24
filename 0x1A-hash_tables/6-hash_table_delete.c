#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int size;
	hash_node_t *temp, *aux;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			aux = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
