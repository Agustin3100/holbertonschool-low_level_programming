#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to copy
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	while (str[j])
	{
		p[j] = str[j];
		j++;
	}
	p[j] = 0;
	return (p);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *ncpy;
	char *ocpy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	ncpy = _strdup(name);
	if (!ncpy && name)
	{
		free(d);
		return (NULL);
	}
	ocpy = _strdup(owner);
	if (!ocpy && owner)
	{
		free(ncpy);
		free(d);
		return (NULL);
	}

	d->name = ncpy;
	d->age = age;
	d->owner = ocpy;

	return (d);
}
