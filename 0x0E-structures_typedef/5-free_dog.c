#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function to free memory space occupied by dog
 * @d: pointer to struct dog variable
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
