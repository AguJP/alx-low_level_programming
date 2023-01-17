#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function to print a struct dog
 * @d: Pointer to a struct dog
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d-owner);
}
