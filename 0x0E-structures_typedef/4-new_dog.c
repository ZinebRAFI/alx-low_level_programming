#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - makes a dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int z;
	char *ptr;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (z = 1, ptr = name; *ptr; z++)
		ptr++;
	d->name = malloc(z);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}

	for (z = 1, ptr = owner; *ptr; z++)
		ptr++;
	d->owner = malloc(z);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (z = 0; *name != 0; z++, name++)
		d->name[z] = *name;
	d->name[z] = 0;
	for (z = 0; *owner != 0; z++)
		d->owner[z] = *owner++;
	d->owner[z] = 0;
	d->age = age;

	return (d);
}
