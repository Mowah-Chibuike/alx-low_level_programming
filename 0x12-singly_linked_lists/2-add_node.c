#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head node
 * @str: string to be put in the new node
 *
 * Return: pointer to the new node added
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int length;
	list_t *temp = *head, *temp1;
	char *new_string;

	new_string = strdup(str);
	len = strlen(str);
	temp1 = (list_t *)malloc(sizeof(list_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->str = new_string;
	temp1->len = length;
	temp1->next = temp;
	temp = temp1;
	return (temp1);
}
