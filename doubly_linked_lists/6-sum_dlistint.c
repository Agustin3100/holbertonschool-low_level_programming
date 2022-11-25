#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all the data of an dlistint linked list
 * @head: heade of the node
 * Return: result of the additions
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
