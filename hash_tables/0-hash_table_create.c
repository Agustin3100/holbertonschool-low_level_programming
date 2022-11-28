#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: the address of the first array element, or NULL if it failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (!size || size == 0)
	{
		return (NULL);
	}
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;

	free(ht);
	return (ht);
}
