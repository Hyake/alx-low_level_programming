#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs in hash table array order.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int c, count = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (c = 0; c < ht->size; c++)
	{
		if (ht->array[c] != NULL)
		{
			node = ht->array[c];
			while (node != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				count++;
			}
		}
	}
	printf("}\n");
}
