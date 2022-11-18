#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: header of the node
 * Return: counter of the elements
 */
size_t listint_len(const listint_t *h)
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
