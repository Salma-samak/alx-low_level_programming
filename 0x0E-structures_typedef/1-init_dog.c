#include "dog.h"

/**
 * init_dog - initializes dog
 *
 * @d: struct
 * @name: dog's name
 * @age: dog's age
 * @owner:onwer's name
 *
 * Return: nothing
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
