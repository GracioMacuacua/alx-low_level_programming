#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int num1, num2, aux;

	num1 = 48, num2 = 49;

	while (num1 < 57)
	{
		aux = num2;
		while (aux <= 57)
		{
			putchar(num1);
			putchar(aux);
			if (num1 < 56)
			{
				putchar(',');
				putchar(' ');
			}
			aux++;
		}
		num1++;
		num2++;
	}
	putchar(10);
	return (0);
}
