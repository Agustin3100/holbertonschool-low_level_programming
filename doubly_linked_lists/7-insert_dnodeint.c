#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a node at a specific index
 * @head: head of the node
 * @idx: index of the node
 * @n: int data
 *
 * Descriptiom: description
 * Return: head pointer to linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int pos;
	
	if (idx == 0)
	{
		return (add_dnodeint(head, n));

	}

	

	temp = *head;
	pos = 0;
	new = malloc(sizeof(dlistint_t));
	new->n = n;

	if (!head)
	{
		return (new);
	}
	
	while (temp != NULL) 
	{
		if(pos == idx)
			break;
		temp = temp->next;
		pos++;
	}
	
	
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;
	

	return new;
}
