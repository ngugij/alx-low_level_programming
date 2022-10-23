#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, one = 0;
	unsigned int size;
	hash_node_t *temp;

	if (!ht)
	{
		return;
	}
	printf("{");
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (!one)
				{
					printf("\'%s\': \'%s\'", temp->key, temp->value);
					one = 1;
				}
				else
					printf(", \'%s\': \'%s\'", temp->key, temp->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
