#include "lists.h"
#include "stdlib.h"
#include <string.h>
/**
 * add_node - adds a node to the beginning of the list
 * @head: dereferenced pointer to header value
 * @str: string of the struct
 * Return: addres of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nexth;

	nexth = malloc(sizeof(list_t));

	nexth->len = strlen(str);
	nexth->str = strdup(str);
	nexth->next = *head;
	*head = nexth;

	return (nexth);
}
