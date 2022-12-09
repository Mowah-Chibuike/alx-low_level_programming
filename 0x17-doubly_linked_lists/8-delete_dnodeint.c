#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list.
 * @head: double pointer to the head node
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head, *prev, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (temp == NULL && i <= index)
			return (-1);
		temp = temp->next;
	}
	if (temp == NULL)
	{
		printf("Hello %d\n", i);
		return (-1);
	}
	prev = temp->prev;
	next = temp->next;
	prev->next = next;
	next->prev = prev;
	free(temp);
	return (1);
}
