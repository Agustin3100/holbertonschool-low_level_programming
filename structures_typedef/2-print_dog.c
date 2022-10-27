#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
void print_dog(struct dog *d)
{
	


	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	
	if (d->name == NULL)
	{
		d->age = printf("Age: (nil)");
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
printf("Name: %s\n",d->name);
printf("Age: %f\n",d->age);
printf("Owner: %s\n",d->owner);


}
