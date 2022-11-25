#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - returns the nth node a dlistint linked list
 * @head: heade of the node
 * @n: int value of the struct
 * Return: addres for the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newPtr; /* pointer to a new node */
dlistint_t *previousPtr;  /* pointer to a previous a node in list */
dlistint_t *currentPtr;  /* pointer to current node in list */

newPtr = malloc(sizeof(dlistint_t));  /* create node */

if (newPtr != NULL)
{
	newPtr->n = n;
	newPtr->next = NULL;

	previousPtr = NULL;
	currentPtr = *head;

	while (currentPtr != NULL && n > currentPtr->n)
	{
		previousPtr = currentPtr;
		currentPtr = currentPtr->next;
	}

	if (previousPtr == NULL)
	{
		newPtr->next = *head;
		*head = newPtr;
	}
	else
	{
		previousPtr->next = newPtr;
		newPtr->next = currentPtr;
	}
}
	return (newPtr);
}
