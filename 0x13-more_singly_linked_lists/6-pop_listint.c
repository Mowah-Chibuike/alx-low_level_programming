#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the address of the head node
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int node_data;

	if (temp == NULL)
		return (0);
	*head = temp->next;
	node_data = temp->n;
	free(temp);
	return (node_data);
}
