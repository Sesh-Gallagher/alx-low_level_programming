#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * @d: struct dogo to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
