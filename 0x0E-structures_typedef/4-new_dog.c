#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_new, len_old;

	struct dog *n_dog = NULL;

	len_new = 0;
	while (name[len_new] != '\0')
		len_new++;
	len_old = 0;
	while (owner[len_old] != '\0')
		len_old++;
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(len_new + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(len_old + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= len_new; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= len_old; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
