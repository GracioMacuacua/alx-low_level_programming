#include "main.h"

/**
 * _strcpy - Copies a string from a sorce into a new destination
 * @src: A pointer to the source string
 * @dest: A pointer to the new destination
 *
 * Return: A pointer to the destination with the string copied
 */
char *_strcpy(char *dest, char *src)
{
	int size, i;

	size = 0;

	while (src[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}