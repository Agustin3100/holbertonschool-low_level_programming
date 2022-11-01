#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - liberates the poor dog
 * @d: struct dog
 * Return: vodi
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
