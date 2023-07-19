#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a function that counts the length of a string
 *
 * @str: the string
 *
 * Return: the length
*/
int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcopy - a function that copies a string
 *
 * @str: the string to copy
 * @dest: destination
 *
 * Return: @dest
*/
char *strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src [i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - a function that creates a new dog's infos
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog'd owner's name
 *
 * Return: struct pointer dog or NULL if it fails
*/
dog_t *new_dog (char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
