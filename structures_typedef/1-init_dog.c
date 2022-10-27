/**
 * init_dog - initializes variables of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: pointer to struct dog
 *
 * Description:	struct dog in dog.h
 * Return: value 0 (success)
 */
#include <stdlib.h>
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}
