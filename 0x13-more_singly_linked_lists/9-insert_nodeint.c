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
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the address of the head node
 * @idx: index of the list where the new node should be added
 * @n: data to be stored in new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position, i, num;
	listint_t *temp = *head, *new;

	position = idx + 1;
	num = number_of_nodes(*head);
	if (position > (num + 1))
		return (NULL);
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (position == 1)
	{
		*head = new;
		new->next = temp;
		return (new);
	}
	for (i = 0; i < (position - 2); i++)
		temp = temp->next;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
