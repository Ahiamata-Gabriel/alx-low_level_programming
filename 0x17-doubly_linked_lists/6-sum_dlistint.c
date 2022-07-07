#include "lists.h"

/**
 *sum_dlistint-Returns the sum of all the data (n) of a linked list.
 *@head:Pointer to the head node.
 *Return: sum of data n.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
