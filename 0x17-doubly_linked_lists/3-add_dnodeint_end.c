#include "lists.h"

/**
 *add_dnodeint_end-Adds a new node at the end of a double linked
 *list.
 *@head:Pointer to a pointer that points to the head node.
 *@n:Element of the new node.
 *Return:Address of the new element, null if it fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (temp == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
