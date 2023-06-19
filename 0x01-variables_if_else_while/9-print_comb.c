#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int num;

	num = 48;

	while (num < 57)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar(57);
	return (0);
}
