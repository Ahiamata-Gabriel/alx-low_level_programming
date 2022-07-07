#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes a node at index, index.
 *@head: Pointer to a pointer that points to the head.
 *@index: index of the node to be deleted.
 *Return: 1 if it successed, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
/*Check if tmp is at the head*/
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
