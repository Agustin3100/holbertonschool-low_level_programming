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
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (i < index && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (NULL);
	return (tmp);

}
