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
	dlistint_t *nexth;

	nexth = malloc(sizeof(dlistint_t));

	nexth->n = n;
	nexth->next = *head;
	*head = nexth;

	return (nexth);
}
