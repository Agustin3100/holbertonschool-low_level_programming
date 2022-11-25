#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delets a node at a specific index
 * @head: head of the node
 * @index: index of the node
 *
 * Descriptiom: description
 * Return: 1 on success -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *next;
	unsigned int pos = 0;

	tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp && pos < index - 1 )
	{

		tmp = tmp->next;
		pos++;
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
	}

	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	return (1);
}
