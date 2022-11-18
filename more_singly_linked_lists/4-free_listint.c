#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a single link list
 * @head: dereferenced pointer to node value
 * Return: void;
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;

		free(head);
		head = temp;
	}
}
