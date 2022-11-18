#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a single link list and sets the head to null
 * @head: dereferenced pointer to node value
 * Return: void;
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	
}
