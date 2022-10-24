#include "lists.h"

/**
 * listint_len - calculates the number of elements ina listint_t list
 * @h: pointer to head node
 *
 * Return: number of elements in a listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	if (temp == NULL)
		return (i);
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
