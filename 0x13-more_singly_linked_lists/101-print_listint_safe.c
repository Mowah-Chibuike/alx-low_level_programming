#include "lists.h"
#include <stdio.h>

/**
 * rm - reallocates memory  for a larger array of pointer
 * @old: array to be appended
 * @size: size of the new array
 * @new: new child to be add to the arrays of pointers
 *
 * Return: a pointer to the concatenated array 
 */
const listint_t **rm(const listint_t **old, size_t size, const listint_t *new)
{
	size_t i;
	const listint_t **newlist;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(old);
		exit(98);
	}
	for (i = 0; i < (size - 1); i++)
		newlist[i] = old[i];
	newlist[i] = new;
	free(old);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: address of the head node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;
	listint_t *next;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (list[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		next = head->next;
		list = rm(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = next;
	}
	free(list);
	return (num);
}
