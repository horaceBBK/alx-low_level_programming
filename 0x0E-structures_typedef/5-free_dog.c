#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog structure
 * @d: The dog structure to be freed
 *
 * Description: Frees the memory allocated for the dog structure and
 * its members. Assumes that 'name' and 'owner' were dynamically
 * allocated and can be freed.
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
