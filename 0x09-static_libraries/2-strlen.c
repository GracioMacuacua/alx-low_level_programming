#include "main.h"

/**
 * _strlen - Looks for the length of a string
 * @s: A pointer to the string we want to know its length
 * Return: The length of the given string
 */
int _strlen(char *s)
{
	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}
