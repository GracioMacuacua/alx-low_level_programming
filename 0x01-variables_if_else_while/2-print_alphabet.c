#include <stdio.h>

/**
 *  main - Entry Point
 *  Return: 0
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}
