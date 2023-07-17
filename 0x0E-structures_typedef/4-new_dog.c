#include "dog.h"
#include <stdlib.h>

/**
* strcopy - copy string.
* @sour: string to copy.
* @des: string will copy to.
* Return: string.
*/
char *strcopy(char *sour, char *des)
{
		int i;

		for (i = 0; i < sour[i]; i++)
		{
			des[i] = sour[i];
		}
		des[i] = '\0';
		return (des);
}

/**
* _strLen - get length of string.
* @c: string.
* Return: integer.
*/
int _strLen(char *c)
{
		int i;

		for (i = 0; c[i] != '\0'; i++)
			;
		return (i);
}

/**
* new_dog -   creates a new dog.
* @name: string.
* @age: integer.
* @owner: string
* Return: struct dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
		int size_of_str;

		dog_t *dog;

		if (!name || !owner || age < 0)
		{
			return (NULL);
		}
		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
		{
			return (NULL);
		}
		size_of_str = _strLen(name);
		dog->name = malloc(sizeof(char) * size_of_str + 1);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		size_of_str = _strLen(owner);
		dog->owner = malloc(sizeof(char) * size_of_str + 1);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		strcopy(name, dog->name);
		strcopy(owner, dog->owner);
		dog->age = age;
		return (dog);
}

