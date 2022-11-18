#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a node at the end of the list
 * @head: dereferenced pointer to header value
 * @str: string of the struct
 * Return: addres of the new last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastnode;

	newNode = malloc(sizeof(list_t));

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		lastnode = *head;

		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newNode;
	}
	return (lastnode);
}
