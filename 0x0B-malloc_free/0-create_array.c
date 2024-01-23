#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: the size of the array.
 * @c: the char to be used to fill the array.
 *
 * Return: A poiter to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(sizeof(char) * size);

	i = 0;

	if (size == 0 || ptr == NULL)
		return (NULL);

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}

	return (ptr);
}
