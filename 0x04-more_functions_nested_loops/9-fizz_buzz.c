#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line
 * For multiples of three or five or both prints Fizz,
 * Buzz and FizzBuzz, respectively.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
			printf(" ");

		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz");
			else if (i % 3 == 0)
				printf("Fizz");
			else
				printf("Buzz");
		}
		else
			printf("%d", i);
	}
	printf("\n");

	return (0);
}