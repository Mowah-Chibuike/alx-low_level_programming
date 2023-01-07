#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	char *delim = "";

	if (ht != NULL)
	{
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head != NULL)
			{
				printf("%s'%s': '%s'", delim, head->key, head->value);
				delim = ", ";
				head = head->next;
			}
		}
		puts("}");
	}
}
