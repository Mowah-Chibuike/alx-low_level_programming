#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		size++;
		temp = temp->next;
	}
	return (size);
}
