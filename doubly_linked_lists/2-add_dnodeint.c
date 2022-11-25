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
	dlistint_t *aux;

	aux = *head;
	if (!*head)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
	{
		return (NULL);
	}
	if (*head)
	{
		tmp->n = n;
		tmp->prev = NULL;
		aux->prev = tmp;
		tmp->next = aux;
		*head = tmp;
	}
	if (aux != NULL)
	{
		tmp->prev = *head;
	}
	return (tmp);
}
