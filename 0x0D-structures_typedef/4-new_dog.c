#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *newDawg;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDawg = malloc(sizeof(dog_t));

	if (name != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
		;

		newDawg->name = malloc(i * sizeof(char));

		if (newDawg->name == NULL)
		{
			free(newDawg->name);
			return (NULL);
		}

		for (i = 0; name[i] != '\0'; i++)
			newDawg->name[i] = name[i];
	}
	else
		return (NULL);

	if (owner != NULL)
	{
		for (j = 0; owner[j] != '\0'; j++)
		;

		newDawg->owner = malloc(j * sizeof(char));

		if (newDawg->owner == NULL)
		{
			free(newDawg->owner);
			return (NULL);
		}

		for (j = 0; owner[j] != '\0'; j++)
			newDawg->owner[j] = owner[j];
	}
	else
		return (NULL);

	newDawg->age = age;

	return (newDawg);
}
