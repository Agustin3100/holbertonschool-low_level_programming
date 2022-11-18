#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_len - returns number of elements in a linked list
 * @h: header of the node
 * Return: counter of the elements
 */
size_t list_len(const list_t *h)
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
