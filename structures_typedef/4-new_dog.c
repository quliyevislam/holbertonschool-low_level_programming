#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - Copies a string from source to destination.
 * @str1: Pointer to the destination string.
 * @str2: Pointer to the source string.
 *
 * Return: Pointer to str1.
 */
char *_strcpy(char *str1, const char *str2)
{
	int i = 0;

	while (str2[i])
	{
		str1[i] = str2[i];
		i++;
	}

	str1[i] = '\0';

	return (str1);
}
/**
 * _strlen - Returns the length of a string.
 * @str: Pointer to a char (string).
 *
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
/**
 * new_dog - Creates a new dog struct.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 *
 * Return: NULL if the allocation fails,
 * or a pointer to the allocated memory.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy;
	char *owner_cpy;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	name_cpy = malloc(_strlen(name) + 1);

	if (name_cpy == NULL)
	{
		free(name_cpy);
		free(new_dog);
		return (NULL);
	}

	_strcpy(name_cpy, name);

	owner_cpy = malloc(_strlen(owner) + 1);

	if (owner_cpy == NULL)
	{
		free(owner_cpy);
		free(name_cpy);
		free(new_dog);
		return (NULL);
	}

	_strcpy(owner_cpy, owner);

	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;

	return (new_dog);
}
