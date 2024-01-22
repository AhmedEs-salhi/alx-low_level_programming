#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints
 * a structure
 * @d: struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
	else
		printf("");
}
