#include "lists.h"
/**
 *free_dlistint-Frees a doubly linked list.
 *@head:Pointer to the head of the double linked list.
 *Return:void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *holder;

	while (temp != NULL)
	{
		holder = temp->next;
		free(temp);
		temp = holder;
	}
}
