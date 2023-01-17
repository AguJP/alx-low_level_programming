#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialize a variable of struct dog
 * @d: pointer to struct variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
