#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node a dlistint linked list
 * @head: heade of the node
 * @index: index of the node starting at 0
 * Return: addres for the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nexth;
	unsigned int i = 0;

	nexth = malloc(sizeof(dlistint_t));

	if (head == NULL)
	{
		return (NULL);
	}

	for (index = 0; head; index++)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}
	return (nexth);
}
