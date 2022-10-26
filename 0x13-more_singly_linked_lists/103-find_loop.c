#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: pointer to the head node
 *
 * Return: The address of the node where the loop starts, or NULL if there is
 * no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *current;

	temp = current = head;
	while (current && temp && temp->next)
	{
		current = current->next;
		temp = temp->next->next;
		if (current == temp)
		{
			current = head;
			break;
		}
	}
	if (!temp || !current || !temp->next)
		return (NULL);
	while (current != temp)
	{
		current = current->next;
		temp = temp->next;
	}
	return (temp);
}
