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
 * get_nodeint_at_index - gets the the nth node of a listint_t linked list.
 * @head: pointer to the head node
 * @index: index of the node
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position; /* position of the node counting from 1 */
	unsigned int i, num;
	listint_t *temp = head;

	position = index + 1;
	num = number_of_nodes(head);
	if (num == 0 || position > num)
		return (NULL);
	if (position == 1)
		return (head);
	for (i = 0; i < (position - 2); i++)
		temp = temp->next;
	return (temp->next);
}
