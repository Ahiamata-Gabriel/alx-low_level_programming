#include "lists.h"

/**
 *print_dlistint - Prints all the elments of a doubly linked list.
 *@h: Pointer to the head of a doubly linked list.
 *Return:Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i =  0;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
