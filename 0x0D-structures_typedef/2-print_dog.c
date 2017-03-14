#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)");
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
