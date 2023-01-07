#include "hash_tables.h"

/**
 * check_for_key - checks if a key is already stored in a hash table
 * @ht: hash table
 * @idx: index of the key to be searched for
 * @key: key to be searched for
 *
 * Return: pointer to the location where the key is stored, otherwise NULL
 */
hash_node_t *check_for_key(hash_table_t *ht, unsigned long int idx, char *key)
{
	hash_node_t *head;

	head = ht->array[idx];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head);
		head = head->next;
	}
	return (NULL);
}

/**
 * add_hash_node - adds a hash node to a hash table
 * @ht: hash table to be added to
 * @key: key of the element to be added
 * @value: value associated with the key
 *
 * Return: pointer to the added node or NULL
 */
hash_node_t *add_hash_node(hash_table_t *ht, char *key, char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t **head;

	index = key_index((const unsigned char *)key, ht->size);
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = key;
	new_node->value = value;
	new_node->next = NULL;
	head = &ht->array[index];
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash table to insert element
 * @key: key of element to be inserted in the hash table
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *element;
	char *new_key, *new_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	element = check_for_key(ht, index, (char *)key);
	if (element == NULL)
	{
		new_key = strdup(key);
		new_value = strdup(value);
		if (new_key == NULL || new_value == NULL)
			return (0);
		element = add_hash_node(ht, new_key, new_value);
		if (element == NULL)
			return (0);
	}
	else
	{
		new_value = strdup(value);
		if (new_value == NULL)
			return (0);
		element->value = new_value;
	}
	return (1);
}
