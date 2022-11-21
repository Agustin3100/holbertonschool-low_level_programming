#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a node at a specific index
 * @head: head of the node
 * @idx: index of the node
 * @n: int data
 *
 * Descriptiom: description
 * Return: head pointer to linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp;
	listint_t *prev_node;
	unsigned int pos;

	tmp = *head;
	pos = 0;
	node = malloc(sizeof(listint_t));
	node->n = n;

	if (!head)
	{
		return (node);
	}
	while (tmp != NULL)
	{
		if (pos == idx)
		break;
		prev_node = tmp;
		tmp = tmp->next;
		pos++;
	}
	prev_node->next = node;
	node->next = tmp;

	return (*head);
}
