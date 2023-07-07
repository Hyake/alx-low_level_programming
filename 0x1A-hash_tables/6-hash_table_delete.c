#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int c = 0;
	hash_node_t *node;

	while (c < ht->size)
	{
		while (ht->array[c] != NULL)
		{
			node = ht->array[c]->next;
			free(ht->array[c]->key);
			free(ht->array[c]->value);
			free(ht->array[c]);
			ht->array[c] = node;
		}
		c++;
	}
	free(ht->array);
	free(ht);
}
