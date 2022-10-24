#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements in a listint_t list
 * @h: pointer to the head node
 *
 * Return: number of elements in the listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *temp = h;

	if (temp == NULL)
		return (0);
	i = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
