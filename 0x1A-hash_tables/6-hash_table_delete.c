#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head, *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			next = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = next;
		}
	}
	free(ht->array);
	free(ht);
}
