#include <stdio.h>

/**
 * main - Entry Point
 * Return: 1
 */
int main(void)
{
	const char* quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quote, strlen(quote));
	return (1);
}
