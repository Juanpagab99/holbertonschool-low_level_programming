#include "dog.h"
#include <stdio.h>
/**
 * print_dog - A dog will teach you unconditional love.
 * @d: pointer to structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("%.6f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("owner: %s\n", d->owner);
		}
	}
}
