#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - define new type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: Jay's dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
int _strlength(char *s);
char *_strcpy(char *dest, char *src);
#endif
