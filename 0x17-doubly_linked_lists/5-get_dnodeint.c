#include "lists.h"
/**
 *get_dnodeint_at_index-Returns nth node of a doubly linked list.
 *@head: Pointer to the head of a doubly linked list.
 *@index: index of the node starting at zero.
 *Return: Null if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = head;
	unsigned int size_d = sizeof_dlist(temp);

	if (index > size_d)
	{
		return (NULL);
	}
	else
	{

		for (i = 0; i <= index;  i++)
		{
			if (i == 0)
			{
				temp = temp;
			}
			else
			{
				temp = temp->next;
			}
		}
	}
	return (temp);
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
