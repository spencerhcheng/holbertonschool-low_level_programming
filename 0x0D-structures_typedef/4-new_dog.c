#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlength - function that returns the length of a string
 * @s: string that is input
 * Return: length
 */

int _strlength(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	i++;
	return (i);
}

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte \0 to the buffer pointed
 * to by dest.
 * @dest: pointer to buffer
 * @src: pointer to string
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *fido;
	int len1, len2, i, j;

	len1 = _strlength(name);
	len2 = _strlength(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	fido = malloc(sizeof(dog_t));

	if (fido == NULL)
	{
		free(fido);
		return (NULL);
	}

	fido->name = malloc(sizeof(char) * len1);

	if (fido->name == NULL)
	{
		free(fido->name);
		free(fido);
		return (NULL);
	}

	*_strcpy(fido->name, name);

	fido->owner = malloc(len2 * sizeof(char));

	if (fido->owner == NULL)
	{
		free(fido->name);
		free(fido->owner);
		free(fido);
		return (NULL);
	}

	*_strcpy(fido->owner, owner);

	fido->age = age;
	return (fido);
}
