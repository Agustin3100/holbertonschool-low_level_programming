#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - returns number of elements in a linked list
 * @h: header of the node
 * Return: counter of the elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt;

	cnt = 0;
	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
