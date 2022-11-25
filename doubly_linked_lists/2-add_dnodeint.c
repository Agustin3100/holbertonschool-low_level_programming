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
	

       if(!head)
	 {
		free(head);
		return NULL;
	} 

        nexth = malloc(sizeof(dlistint_t));
        
	if(!nexth)
	{
		free(head);
		free(nexth);
		return NULL;

	}
        

        nexth->n = n;
	nexth->next = *head;
	nexth->prev = *head;
	*head = nexth;

        return (nexth);

}
