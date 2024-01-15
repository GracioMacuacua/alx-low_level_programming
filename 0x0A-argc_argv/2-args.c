#include "main.h"

/**
 * main - A program that prints all arguments it receives.
 * @argc: The number of arguments from the command-line/
 * @argv: The command-line arguments.
 *
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
