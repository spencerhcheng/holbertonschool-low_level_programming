#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog's name, age and owner
 * @d: pointer to struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
	{
		d->name = "(nil)";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
