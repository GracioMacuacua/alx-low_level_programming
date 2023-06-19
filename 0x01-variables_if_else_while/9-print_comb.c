#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int num;

	num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar(10);
	return (0);
}
