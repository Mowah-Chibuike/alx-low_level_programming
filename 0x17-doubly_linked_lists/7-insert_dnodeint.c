#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head node
 * @idx: index of the list where the new node should be added. Index starts at
 * 0
 * @n: the new element to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newNode, *prev, *temp = *h;

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	for (i = 0; i < idx; i++)
	{
		if (temp == NULL)
			break;
		temp = temp->next;
	}
	if (temp == NULL && i == idx)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}
	else if (temp == NULL && i < idx)
		return (NULL);
	else if (temp == NULL && (i + 1) == idx)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	prev = temp->prev;
	newNode = add_dnodeint(&temp, n);
	prev->next = newNode;
	return (newNode);
}
