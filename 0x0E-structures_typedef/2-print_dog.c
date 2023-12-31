#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 *
 * Description: Prints the name, age, and owner of a dog. If an attribute
 * is NULL, it prints "(nil)" for that attribute.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
