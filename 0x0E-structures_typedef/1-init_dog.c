#include "dog.h"
/**
 *init_dog - Initialize a variable of type struct dog
 *@d: Input struct
 *@name: Input dog name
 *@age: Input dog age
 *@owner: Input dog owner
 *Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
