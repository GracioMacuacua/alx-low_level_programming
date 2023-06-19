#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	char number;

	number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	number = 'a';

	while (number <= 'f')
	{
		putchar(number);
		number++;
	}

	putchar(10);
	return (0);
}
