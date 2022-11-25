#include "lists.h"

#include <stdlib.h>

/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: dereferenced pointer to header value
 * @n: int of the struct
 * Return: addres of the new last node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *tmp;
        dlistint_t *aux;

        aux = *head;
        if (!head)
        {
                free(head);
                return (NULL);
        }
        tmp = malloc(sizeof(dlistint_t));
        if (!tmp)
        {
                free(head);
                free(tmp);
                return (NULL);
        }

       while(tmp != NULL && n > tmp->n)
       {
                tmp->n = n;
                tmp->prev = NULL;
                tmp->next = aux;
                *head = tmp;
        }

        if (aux != NULL)
        {
                tmp->prev = *head;
        }
        return (tmp);
}
