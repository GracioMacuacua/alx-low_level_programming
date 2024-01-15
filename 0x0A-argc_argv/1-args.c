#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: The number of arguments from the command-line.
 * @argv: The command-line arguments.
 *
 * Return: Always 0 (success
*/
int main(int argc, char *argv[])
{

	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
