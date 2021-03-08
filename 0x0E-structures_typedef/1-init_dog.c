#include "dog.h"
/**
 * init_dog - A dog is the only thing on earth that loves you more than you love yourself
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: own of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* iniciamos los elementos si la direccion es diferente de 0. pointers to structures PDF */
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}