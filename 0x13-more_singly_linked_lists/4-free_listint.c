#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head, *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
