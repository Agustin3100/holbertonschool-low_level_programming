#include "lists.h"
#include <stdlib.h>
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nexth;
	int j = 0;
	nexth = malloc(sizeof(listint_t));
	
	if (head == NULL)
	{
		return (NULL);
	}


	for (idx = 0; *head; idx++)
	{	
		 
		
       		if (j == n)
		{		
			nexth->n = n;
			nexth->next = *head;
		
		
		*head = (*head)->next;
		}
		j++;
	}

	return (nexth);	



}
