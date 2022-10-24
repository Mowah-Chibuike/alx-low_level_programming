#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the address of the head node
 *
 * Description: sets head to NULL
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *temp;

	if (*head == NULL)
		return
	*head = NULL;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
