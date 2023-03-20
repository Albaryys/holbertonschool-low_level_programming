#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the new dog structure, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (!newdog)
		return (NULL);

	newdog->name = strdup(name);
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}

	newdog->age = age;

	newdog->owner = strdup(owner);
	if (!newdog->owner)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	return (newdog);
}

/**
 * _strdup - Duplicates a string by allocating new memory
 * @src: The source string to duplicate
 *
 * Return: A pointer to the newly-allocated string, or NULL if it fails
 */
char *_strdup(const char *src)
{
	char *dest;
	size_t len;

	if (src == NULL)
	{
		return (NULL);
	}

	len = strlen(src) + 1;
	dest = malloc(len * sizeof(char));

	if (dest == NULL)
	{
		return (NULL);
	}

	memcpy(dest, src, len);

	return (dest);
}
