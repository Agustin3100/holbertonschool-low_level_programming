#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - frees a list_t list
 * @head: the header to delete
 * Return: nothing
 *
 **/
int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *aux;


	if (*head == NULL)
		return (0);

	aux = *head;
	tmp = aux->n;
	*head = aux->next;

	free(aux);
	return (tmp);
}
