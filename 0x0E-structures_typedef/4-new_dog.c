#include <stdlib.h>
#include "dog.h"


int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);


/**
 * _strlen - Returns the length of a string.
 * @str: String to be measure.
 *
 * Return: The length of a string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - Copies a string pointed to a src to
 * a buffer pointed to a dest.
 * @dest: Buffer storing the string copy.
 * @src: Source string.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}


/**
 * new_dog - Creates a new dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	bingo->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}

	bingo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (bingo->owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}

	bingo->name = _strcpy(bingo->name, name);
	bingo->age = age;
	bingo->owner = _strcpy(bingo->owner, owner);

	return (bingo);
}
