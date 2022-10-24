#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t linked
 * list.
 * @head: pointer to the head node
 *
 * Return: the sum of all the data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (sum);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
