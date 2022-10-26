#include "lists.h"

/**
 * rm - reallocattes memory for a bigger array of pointers to listint_t types
 * @oldlist: list to be appended to
 * @size: size of new list
 * @new: new pointer to be added
 *
 * Return: array of pointers to listint_t types
 */
listint_t **reallocate(listint_t **oldlist, size_t size, listint_t *new)
{
	size_t i;
	listint_t **newlist;

	newlist = (listint_t **)malloc(sizeof(listint_t *) * size);
	if (newlist == NULL)
	{
		free(oldlist);
		exit(98);
	}
	for (i = 0; i < (size - 1); i++)
		newlist[i] = oldlist[i];
	newlist[i] = new;
	free(oldlist);
	return (newlist);
}

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointerr to the address of the head node
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, num = 0;
	listint_t *next, **list = NULL;

	while (*h != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = reallocate(list, num, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (num);
}
