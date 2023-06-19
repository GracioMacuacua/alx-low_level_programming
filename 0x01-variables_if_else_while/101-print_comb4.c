#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int num, num2, aux, aux2;

	num = 48, num2 = 49;

	while (num <= 55)
	{
		aux = num2;
		while (aux <= 56)
		{
			aux2 = aux + 1;
			while (aux2 <= 57)
			{
				putchar(num);
				putchar(aux);
				putchar(aux2);
				if (num <= 54)
				{
					putchar(',');
					putchar(' ');
				}
				aux2++;
			}
			aux++;
		}
		num++;
		num2++;
	}
	putchar(10);
	return (0);
}
