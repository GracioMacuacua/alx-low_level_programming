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
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}
