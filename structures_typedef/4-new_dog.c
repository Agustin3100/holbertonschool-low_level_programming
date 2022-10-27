#include "dog.h"
#include <string.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{



struct dog *p;

	p = malloc(sizeof(struct dog));

	p->age = age;
	p->name = name;
	p-> owner = owner;	




return p;

}
