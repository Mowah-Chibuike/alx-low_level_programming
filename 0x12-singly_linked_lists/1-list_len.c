#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: pointer to first node of the list
 *
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	const list_h *temp = h;
	size_t n = 0;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
