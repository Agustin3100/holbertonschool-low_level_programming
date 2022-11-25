#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a single link list
 * @head: dereferenced pointer to node value
 * Return: void;
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;

		free(head);
		head = temp;
	}
}
