#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog's name, age and owner
 * @d: pointer to struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

	printf("Age: %f\n", d->age);
}
