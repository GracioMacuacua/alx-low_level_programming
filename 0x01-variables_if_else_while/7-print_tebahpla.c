#include <stdio.h>

/**
 *  main - Entry Point
 *  Return: 0
 */
int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar(10);
	return (0);
}
