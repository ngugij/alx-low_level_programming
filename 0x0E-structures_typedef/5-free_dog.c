#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  frees memory for struct dog
 * @d: pointer
 *
 * Return: nothing
 */


void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}

	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
