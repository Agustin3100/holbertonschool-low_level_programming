#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node a linstint linked list
 * @head: heade of the node
 * @index: index of the node starting at 0
 * Return: addres for the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nexth;
	unsigned int i = 0;

	nexth = malloc(sizeof(listint_t));

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
