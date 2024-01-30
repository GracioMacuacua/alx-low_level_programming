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

	return (size + 1);
}

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: number of arguments.
 * @av: array of arguments;
 *
 * Return: a pointer to a string with all arguments.
 */
char *argstostr(int ac, char **av)
{
	int numChars, i, j, k;
	char *newString;

	if (ac == 0 || av == NULL)
		return (NULL);

	numChars = 0;

	for (i = 0; i < ac; i++)
		numChars += _strlen(av[i]);

	newString = (char *)malloc((sizeof(char) * numChars));

	if (newString == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newString[k] = av[i][j];
			k++;
		}
		newString[k] = '\n';
		k++;
	}
	newString[k] = '\0';

	return (newString);
}
