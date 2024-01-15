#include "main.h"

/**
 * main - A program that multiplies two numbers.
 * @argc: The number of arguments from the command-line.
 * @argv: The command-line arguments.
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{

	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}

	return (0);
}
