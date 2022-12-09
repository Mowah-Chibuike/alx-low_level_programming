#include "lists.h"

/**
 * create_new_node - creates a new node in a dlistint_t list
 * @n: integer to be added in new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *create_node(int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	return (newNode);
}

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the head node
 * @n: integer to be added to the new node in the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = create_node(n);
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	newNode->next = *head;
	newNode->prev = (*head)->prev;
	(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
