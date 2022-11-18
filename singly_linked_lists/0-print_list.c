#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - prints all elemens of list_t list
 * @h: string - pointer to first element
 *
 * Description: singly linked list node structure
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);

}
