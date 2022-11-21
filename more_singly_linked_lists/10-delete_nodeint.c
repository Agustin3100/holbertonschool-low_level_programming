#include "lists.h"
#include <stdlib.h>
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *aux;
	unsigned int i = 0;
	aux = *head;
	
		
	while (aux != NULL)	
	{
		if(i == index)
		{
			free(aux);
			return 1;
		}
	
		i++;
	}
	
	return -1;
	
	


}
