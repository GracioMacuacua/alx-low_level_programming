#include "main.h"

/**
 * _isdigit - check for a digit (0-9)
 * @c: the char to be checked
 *
 * Return: 1 if char c is digit,otherwise 0
 */

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * main - A program that adds positive number
 * @argc: The number of arguments from the command-line.
 * @argv: The command-line arguments.
 *
 * Return: 0 (success), 1 (error)
*/
int main(int argc, char *argv[])
{

	int i, j, result = 0;
	char *c;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		c = argv[i];

		for (j = 0; c[j] != '\0'; j++)
		{
			if (!_isdigit(c[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
