#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: dereferenced pointer to header value
 * @n: int of the struct
 * Return: addres of the new last node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nexth;

	if(!*head)
	{
		return (NULL);
		free(head);
	}

	nexth = malloc(sizeof(listint_t));
	if(!nexth)
	{
		free(head);
		free(nexth);
	}
	if(!n)
	{
		free(nexth);
	}

	nexth->n = n;

	if (!nexth->next)
	{
		nexth->next = *head;
	
	}
	*head = nexth;

	return (nexth);
}
