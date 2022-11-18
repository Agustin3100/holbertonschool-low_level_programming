#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elemens of list_tint list
 * @h: pointer to first element
 *
 * Description: singly linked list node structure
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);

}
