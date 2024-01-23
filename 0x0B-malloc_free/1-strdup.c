#include "main.h"

/**
 * _strdup - creates a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the given string to be copied.
 *
 * Return: A pointer to a copy of the given string
 */
char *_strdup(char *str)
{
	char *ptr;
	int size, i;

	ptr = (char *) malloc(sizeof(str));

	if (str == NULL)
		return (NULL);

	i = 0, size = 0;

	for (; *(str + size) != '\0'; size++)
		;

	while (i < size)
	{
		*(ptr + i) = *(str + i);
		i++;
	}

	*(ptr + i) = '\0';

	return (ptr);
}
