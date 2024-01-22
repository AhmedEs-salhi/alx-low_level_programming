#include "dog.h"

/**
 * init_dog - function that initialize a
 *		structure
 *
 *@d: structre dog
 *		created with its pointer
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the dog's owner
 *
 * Return: the structure created
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
