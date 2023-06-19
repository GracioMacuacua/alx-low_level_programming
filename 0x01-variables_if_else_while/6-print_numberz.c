#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int number;

	number = 48;

	while (number < 58)
	{
		putchar(number);
		number++;
	}
	putchar(10);
	return (0);
}
