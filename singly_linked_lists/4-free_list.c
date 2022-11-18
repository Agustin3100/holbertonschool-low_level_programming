#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a single link list
 * @head: dereferenced pointer to node value
 * Return: void;
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
