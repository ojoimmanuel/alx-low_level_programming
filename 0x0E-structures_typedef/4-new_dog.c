#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mmry_alloc - allocate space in mmry and return pointer
 * @str: string
 *
 * Return: pointer
 */

char *mmry_alloc(char *str)
{
	int len, i;
	char *arr;
		
	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	arr = (char*) malloc(len * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner
 *
 * Return: dot_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dog_name, *dog_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog_name = mmry_alloc(name);
	if (dog_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog_owner = mmry_alloc(owner);
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(dog);
		return (NULL);
	}
	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;
	return (dog);
}
