#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head node of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length;
	list_t *temp = *head, *temp1;
	char *new_string;

	new_string = strdup(str);
	length = strlen(str);
	temp1 = (list_t *)malloc(sizeof(list_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->str = new_string;
	temp1->len = length;
	temp1->next = NULL;
	if (*head == NULL)
	{
		*head = temp1;
		return (temp1);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = temp1;
	return (temp1);
}
