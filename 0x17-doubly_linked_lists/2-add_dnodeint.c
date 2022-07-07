#include "lists.h"

/**
 *add_dnodeint - Adds a node at the head of a doubly linked list.
 *@head: Pointer to a pointer that points to the head of a doubly
 *linked list.
 *@n:element of the node to be inserted.
 *Return: Address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	/*Check if malloc  failed*/
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}

/*Assing data to the new node*/
	newNode->n = n;

	if (!*head)
	{
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
		return (newNode);
	}
}
