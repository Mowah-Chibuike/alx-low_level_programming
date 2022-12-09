#include "lists.h"

/**
 * create_new_node - creates a new node in a dlistint_t list
 * @n: integer to be added in new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *create_new_node(int n)
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
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head node
 * @n: integer to be inserted in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *newNode;

	newNode = create_new_node(n);
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
		temp = temp->next;
	newNode->next = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
