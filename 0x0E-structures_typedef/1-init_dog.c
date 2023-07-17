#include "dog.h"


/**
* init_dog -  initialize a variable of type struct dog.
* @d: struct dog pointer.
* @name: string.
* @owner: string.
* @age: integer.
* Return: void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d != 0)
		{
			d->name = name;
			d->age = age;
			d->owner = owner;
		}
}

