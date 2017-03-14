#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *pup;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	
	pup = malloc(sizeof(dog_t);
	
	if (name != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
		;

		pup->name = 
