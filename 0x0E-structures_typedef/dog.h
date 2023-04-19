#ifndef DOG_H
#define DOG_H

/**
* struct dog - struct of dog.
* @age: integer
* @name: string.
* @owner: string.
* Description: is just a dog struct.
*/
struct dog
{
		char *name;
		char *owner;
		float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
