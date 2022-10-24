#include "lists.h"

/**
 * number_of_nodes - gets the number of nodes in a listint_t list
 * @head: pointer to the head node
 *
 * Return: number of nodes in the list
 */
unsigned int number_of_nodes(listint_t *head)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (i);
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @head: pointer to the address of the head node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, num, position;
	listint_t *current = *head, *temp;

	position = index + 1;
	num = number_of_nodes(*head);
	if (*head == NULL || position > num)
		return (-1);
	if (position == 1)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (position - 2); i++)
		current = current->next;
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}

