#include <stdio.h>

/**
 *  main - Entry Point
 *  Return: 0
 */
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");

	return (0);
}
