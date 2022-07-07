#include "lists.h"

/**
 *insert_dnodeint_at_index - Inserts a new node at a given position.
 *@h:Pointer to a pointer that points to the head node.
 *@n: Data of the pointer to be inserted at index n.
 *@idx:Index of the list where the new node should be added.
 *Return: address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	unsigned int len_of_d = sizeof_dlist(*h);
	dlistint_t *temp = *h;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (idx > len_of_d + 1)
		return (NULL);
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*h == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*h = newNode;
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		for (i = 0; i < (idx - 1); i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		newNode->next = temp->next;
		newNode->prev = temp;
		temp->next = newNode;
	}
	return (newNode);
}

/**
 *sizeof_dlist - Finds the size of a doubly linked list.
 *@head: Pointer to the head of a doubly linked list.
 *Return: Size of the doubly linked list.
 */

int sizeof_dlist(dlistint_t *head)
{
	dlistint_t *temp = head;
	int i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i - 1);
}
