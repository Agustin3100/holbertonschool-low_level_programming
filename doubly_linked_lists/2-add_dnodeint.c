#include "lists.h"

#include <stdlib.h>

/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: dereferenced pointer to header value
 * @n: int of the struct
 * Return: addres of the new last node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;

	if (!head)
	{
		*head = tmp;
	}
	else
	{
		(*head)->prev = tmp;
		tmp->prev = NULL;
		tmp->next = *head;
		*head = tmp;
	}
	return (tmp);


}
