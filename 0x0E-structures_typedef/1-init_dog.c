#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: member
 * @age: member
 * @owner: member
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)

	d->name = name;
	d->age = age;
	d->owner = owner;
}
