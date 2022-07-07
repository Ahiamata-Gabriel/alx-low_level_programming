#include "lists.h"
/**
 *dlistint_len - Finds the number of elements in a linked list.
 *@h:Pointer that points to the head of the linked list.
 *Return:Number of elements n a linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
